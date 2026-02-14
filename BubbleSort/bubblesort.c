#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int vetor[5] = {0,10,15,5,25};
#define SIZE(array) sizeof(array)/sizeof(array[0])

bool trocou = false;
int temp;
void imprimir(){
    printf("[");
    for(int x = 0; x <= (SIZE(vetor)-1); x++){
    printf("%i,", vetor[x]);
    }
    printf("]\n");
}

int main(){
imprimir();
for(int i = 0; i <= (SIZE(vetor) - 2); i++){
    trocou = false;
    for(int j = 0; j <= (SIZE(vetor)- 2 - i); j++){
        if(vetor[j] > vetor[j+1]){
        temp = vetor[j];
        vetor[j] = vetor[j+1];
        vetor[j+1] = temp;
        trocou = true;
        }
    }
}
if(trocou == false){
imprimir();
return 0;
}
}
