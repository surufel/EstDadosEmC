#include<stdio.h>
#include<stdlib.h>

#define TAMANHO 20 // de 0 a 19

typedef struct pilha{
	int pilha[TAMANHO];
	int topo;
}Pilha;

void push(int valor, Pilha *x);
void pop(Pilha *x);
int isEmpty(Pilha *x);

void push(int valor, Pilha *x){
	if(x->topo < TAMANHO){
	x->pilha[x->topo] = valor;
	x->topo++;
	} else {
	printf("Pilha estourou, ela esta cheia");
	}
}

void pop(Pilha *x){
	if(x->topo = -1){
		printf("A pilha está vazia, não tem como dar pop");
	} else {
	printf("Elemento retirado: %d\n", x->pilha[x->topo]);
	x->topo--;
	}
}

int isEmpty(Pilha *x){
	if(x->topo = -1){
		return 1;
	} else {
		return 0;
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

