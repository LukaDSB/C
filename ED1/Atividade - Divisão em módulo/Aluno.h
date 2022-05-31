#include <stdio.h>
#include <stdlib.h>
#define max 10

typedef struct lista{
	int itens[max];
	int n;
}lista;

void criarLista(lista *l){
	l->n = 0;
}

int estaVazia(lista *l){
	if(l->n == 0)
		return 1;
	else
		return 0;
}


int main(){
	
lista Lista;
		
	criarLista(&Lista);
	
return 0;
}
