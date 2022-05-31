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

void insereItem(lista *l, int n){
	l->itens[l->n] = n;
	l->n++;
}


void imprimeLista(lista *l){
	int i;
	for(i = 0; i < l->n; i++){
		printf(" %d \n", l->itens[i]);
	}
}

void deleteItem(lista *l, int v){
	for(int i = 0; i < l->n; i++){
		if( l->itens[i] == v){
			l->itens[i] = 0;
		}
	}
}

int main(){
	
lista Lista;
int val;		

	criarLista(&Lista);
	
	insereItem(&Lista, 10);
	insereItem(&Lista, 20);
	insereItem(&Lista, 30);	

	imprimeLista(&Lista);

		printf("Digite o valor que deseja excluir: ");
			scanf("%d", &val);

	deleteItem(&Lista, val);

	imprimeLista(&Lista);
	
return 0;
}
