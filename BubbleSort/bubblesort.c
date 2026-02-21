#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>

int vetor[1000];
int vetor_dobro[1000];
int vetor_inv[1000];
#define SIZE(array) sizeof(array)/sizeof(array[0])
double tempo_de_exec;
bool trocou = false;
int temp;
void imprimir(){
    printf("Vetor normal - [");
    for(int x = 0; x <= (SIZE(vetor)-1); x++){
    printf("%i,", vetor[x]);
    }
    printf("]\n");
    printf("Vetor invertido - [");
    for(int y = 0; y <= (SIZE(vetor_inv)-1); y++){
    printf("%i,", vetor_inv[y]);
    }
    printf("]\n");
    printf("Vetor com valores dobrados - [");
    for(int z = 0; z <= (SIZE(vetor_dobro)-1); z++){
    printf("%i,", vetor_dobro[z]);
    }
    printf("]\n");
}

void preencher_vetores(){
    for(int i = 0; i<=999; i++){vetor[i] = i;}
    for(int i = 999; i>=0; i--){vetor_inv[i] = 999-i;}
    for(int i = 0; i<=999; i++){vetor_dobro[i] = 2*i;}
}

void bubble_sort(int arr[], int n){
    clock_t comeco, fim;
    comeco = clock();
    for(int i = 0; i<= (n - 2); i++){
        trocou = false;
        for(int j = 0; j<= (n-2-i); j++){
            if(arr[j] > arr[j+1]){ // trocar por < se a ordenação for decrescente
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            trocou = true;
            }
            }
        if(trocou == false){
        break;
        }
        }
    fim = clock();
    tempo_de_exec = ((double)((fim-comeco)*1000))/CLOCKS_PER_SEC; // 0,001s = 1ms
    printf("Tempo de execução: %fms\n", tempo_de_exec); // , matemática básica
}

int main(){
preencher_vetores();
imprimir(); // Vetores enormes serão listados, é esperado que muito texto será impresso.
// Eu quero testar o tempo que vai custar ao trocar um único elemento na lista
vetor_dobro[520] = 6;
// Pós-compilação eu percebi que o tempo que era baixíssimo (por volta de 0.4ms, por já estar ordenado)
// pulou para 1.0ms+
printf("\n\n\n\nVETORES EM PROCESSO DE ORDENACAO\n\n\n\n");
bubble_sort(vetor, SIZE(vetor));
bubble_sort(vetor_inv, SIZE(vetor_inv));
bubble_sort(vetor_dobro, SIZE(vetor_dobro));
printf("\n");
imprimir();
return 0;
}
