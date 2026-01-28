#include<stdio.h>
#include<stdlib.h>

#define TAMANHO 20 // de 0 a 19

typedef struct pilha{
	int pilha[TAMANHO];
	int topo;
}Pilha;

void push(int valor, Pilha *x){
	if(x->topo < TAMANHO){
	x->pilha[x->topo] = valor;
	x->topo++;
	} else {
	printf("Pilha estourou, ela esta cheia");
	}
}


int main(){
	Pilha p;
	p.topo = 0;

	p.pilha[p.topo] = 100; // Empilhando o numero 100
	p.topo++; // Total na pilha: 1
	p.topo--; // Total na pilha: 0
	return 0;
}

