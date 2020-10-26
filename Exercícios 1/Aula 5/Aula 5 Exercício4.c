#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (void){
int i, j, A[4][4];

	for(i = 0; i < 4;i++){ // Receber os valores da matriz.
		for(j = 0; j < 4; j++){
			printf("Matriz A, linha %i, coluna %i: \n", i, j);
				scanf("%i", &A[i][j]);
		}
	}
system("cls");
	
	printf("Impressão da matriz: \n\n");
	{
		for(i = 0; i < 4; i++){ // Imprimir os valores da matriz.
			for(j = 0; j < 4; j++){
				if(A[i][j] %2 == 1){
					printf("%i    ", A[i][j]);
				}
			}	
		printf("\n\n");
		}
	}
}