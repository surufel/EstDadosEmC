#include<stdio.h>
#include<stdlib.h>

#define TAMANHO 20 // de 1 a 20 elementos, 0 seria pilha vazia

typedef struct pilha{
	int pilha[TAMANHO];
	int topo;
}Pilha;

void push(int valor, Pilha *x);
void pop(Pilha *x);
int isEmpty(Pilha *x);
void imprimirPilha(Pilha *x);

void push(int valor, Pilha *x){
	if(x->topo < TAMANHO){
	x->pilha[x->topo] = valor;
	x->topo++;
	} else {
	printf("Pilha estourou, ela esta cheia");
	}
}

void pop(Pilha *x){
	if(x->topo == -1){
		printf("A pilha está vazia, não tem como dar pop");
	} else {
	x->topo--;
	printf("Elemento retirado: %d\n", x->pilha[x->topo]);
	}
}

void imprimirPilha(Pilha *x){
	printf("[");
	for(int i= 0; i < (x->topo); i++){
		printf("%d ",x->pilha[i]);
	}
	printf("]\n");
}

int isEmpty(Pilha *x){
	if(x->topo == 0){
		return 1;
	} else {
		return 0;
	}
}

int main(){
	Pilha p;
	p.topo = 0;
	
	push(2, &p); // Adiciona 2 para o endereço da pilha p
	push(4, &p);
	push(6, &p);
	push(8, &p);
	push(10, &p);

	pop(&p);
	pop(&p);

	imprimirPilha(&p);
	printf("Topo da pilha (indice): %d\n", p.topo);
	return 0;
}

