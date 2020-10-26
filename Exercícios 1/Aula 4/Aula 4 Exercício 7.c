#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct T_Prod{
		float Dez, Vinte, ValCompra, ValVenda, ValLucro;
		char flag[35];
}Prod;

int main (void){
Prod A[100];
short int cont, n = 9, i= 0; 

	while(n != 0 ){
		printf("[0] - Sair do programa.\n");
		printf("[1] - Cadastrar novo produto.\n");
		printf("[2] - Imprimir produtos.\n");
			scanf("%i", &n);
		system("cls");
		
		if(n == 1){
			printf("------Produto %i------\n\n", i);
			printf("Valor de compra do produto: \n");
				scanf("%f", &A[i].ValCompra);
			printf("Valor de venda do produto: \n");
				scanf("%f", &A[i].ValVenda);
		//		
		A[i].ValLucro = (A[i].ValVenda - A[i].ValCompra);
		A[i].Dez = (A[i].ValCompra * 0.1);
		A[i].Vinte = (A[i].ValCompra * 0.2);
		//
	    	if(A[i].ValLucro < A[i].Dez){
		    	strcpy(A[i].flag, "Lucro menor que dez por cento.");
		    } else if(A[i].ValLucro >= A[i].Dez && A[i].ValLucro <= A[i].Vinte){
		    	strcpy(A[i].flag, "Lucro entre dez e vinte por cento.");
		    } else if(A[i].ValLucro > A[i].Vinte){
		    	strcpy(A[i].flag, "Lucro maior que vinte por cento.");
	    	}
		
		i = i + 1;
		system("cls");
		}
		
		if(n == 2){
		cont = i;
			for(i = 0; i < cont; i++){
				printf("------Produto %i------\n\n", i);
				printf("Valor de compra do produto: %0.2f.\n", A[i].ValCompra);
				printf("Valor de venda do produto: %0.2f.\n", A[i].ValVenda);
				printf("Lucro da venda: %0.2f.\n", A[i].ValLucro);
				printf("%s\n\n", A[i].flag);
			}
		}
	}
}