#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (void){
char nome[20][15];
short int A[15][15], B[15], i = 0, n = 9, cont;

while (n != 0 ){
	
	printf("[0] - Sair do programa: \n");
	printf("[1] - Cadastrar usuario: \n");
	printf("[2] - Exibir cadastros: \n");
		scanf("%d", &n);
system("cls");
	
		if(n == 1){
	
			printf("Nome: \n");
			scanf("%s", nome[i]);
		i = i + 1;
		}
	
system("cls");
		if(n == 2){
			cont = i;
			for(i = 0; i < cont; i++){
				printf("\n-----Cadastro: %d-----\n\n", i);
				printf("Nome: %s\n\n", nome[i]);
			}
		}
	}
}