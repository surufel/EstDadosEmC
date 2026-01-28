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
	if(x->topo == -1){
		printf("A pilha está vazia, não tem como dar pop");
	} else {
	x->topo--;
	printf("Elemento retirado: %d\n", x->pilha[x->topo]);
	}
}

int isEmpty(Pilha *x){
	if(x->topo == -1){
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
	pop(&p);
	pop(&p);
	printf("Topo da pilha: %d\n", p.topo);
	return 0;
}

