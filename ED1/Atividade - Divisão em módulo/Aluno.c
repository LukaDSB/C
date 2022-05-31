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

int estaCheia(lista *l){
	if(l->n == max){
		return 1;
	}
	else{
		return 0;
	}
}

void insereItem(lista *l, int n){
	if(!estaCheia(n)){
		l->itens[l->n] = n;
		l->n++;
	} else{
		printf("A lista está cheia, limite de itens atingido!\n");
	}
}

void imprimeLista(lista *l){
	int i;
	for(i = 0; i < l->n; i++){
		printf(" %d \n", l->itens[i]);
	}
}

int main(){
	
lista Lista;
		
	criarLista(&Lista);
	
	insereItem(&Lista, 10);
	insereItem(&Lista, 20);
	insereItem(&Lista, 30);
	printf("%d \n", Lista.itens[0]);
	printf("%d \n", Lista.itens[1]);
	

	imprimeLista(&Lista);
	
return 0;
}
