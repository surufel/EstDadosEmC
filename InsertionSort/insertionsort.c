#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE(array) sizeof(array)/sizeof(array[0])
int vetor[1000];
double tempo_de_exec;

void imprimir(){
    printf("Array -> [");
    for(int i = 0; i <= (SIZE(vetor) - 1); i++){
        printf("%i,", vetor[i]);
        }
    printf("]\n\n");
}

void inserindo_valores_no_array(int arr[], int n){
    for(int i = 0; i <= (n - 1); i++){
        arr[i] = i;
        }
}

void insertion_sort(int arr[], int n){
    clock_t comeco, fim;
    comeco = clock();
    for(int i = 1; i <= (n - 1); i++){
        int chave = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > chave){
        arr[j+1] = arr[j];
        j = j -1;
        }
        arr[j+1] = chave;
        }
    fim = clock();
    tempo_de_exec = ((double)(fim - comeco))*1000/CLOCKS_PER_SEC;
    printf("Tempo de execução: %fms\n\n\n", tempo_de_exec);
}

int main(){
    inserindo_valores_no_array(vetor, SIZE(vetor));
    vetor[36] = 1000; // inserindo o valor no lugar errado para ordenar
    imprimir();
    insertion_sort(vetor, SIZE(vetor));
    imprimir();
}
