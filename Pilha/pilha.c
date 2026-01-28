#include<stdio.h>
#include<stdlib.h>

#define TAMANHO 20

typedef struct pilha{
	int pilha[TAMANHO];
	int topo;
}Pilha;

int main(){
	Pilha p;
	p.topo = 0;

	p.pilha[p.topo] = 100; // Empilhando o numero 100
	p.topo++; // Total na pilha: 1
	p.topo--; // Total na pilha: 0
	
	return 0;
}

