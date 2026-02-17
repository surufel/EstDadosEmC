#include<stdio.h>
#include<stdlib.h>

#define SIZE(array) sizeof(array)/sizeof(array[0]) // Tamanho do vetor

int vetor[7] = {7,6,2,1,2,3,9};
int menor_numero,i,j,temp;

int imprimir(){
    printf("[");
    for(int n = 0; n <= (SIZE(vetor)-1); n++){
        printf("%i,", vetor[n]);
        }
    printf("]");
}

int main(){
    imprimir();
    for(i = 0; i <= (SIZE(vetor) - 2); i++){
    menor_numero = i;
    for(j = i + 1; j <= (SIZE(vetor) - 1); j++){
        if(vetor[j] < vetor[menor_numero]){
        menor_numero = j;}
        }
        temp = vetor[i];
        vetor[i] = vetor[menor_numero];
        vetor[menor_numero] = temp;
}
    imprimir();
}
