#include <stdio.h>
#include <stdlib.h>
int main (void){
int l, c, A[3][5], SOMACOLUNA[5];
	
	for(l = 0; l < 5; l++)
	SOMACOLUNA[l] = 0;

	for(l = 0; l < 3; l++){
		for(c = 0; c < 5; c++){
			printf("Matriz A - Linha %i, coluna %i: \n", l, c);
				scanf("%i", &A[l][c]);
		}
	}
system("cls");
	
	printf("-----Matriz A-----\n\n");
	for(l = 0; l < 3; l++){
		for(c = 0; c < 5; c++){
			printf("%i  ", A[l][c]);
		}
	printf("\n\n");
	}
	
	for(l = 0; l < 5; l++){ 
		for(c = 0; c < 3; c++){
				SOMACOLUNA[l] += A[c][l];	
		}
	}
	
	printf("-----Matriz SOMACOLUNA-----\n\n");
	for(l = 0; l < 5; l++){
		printf("%i  ", SOMACOLUNA[l]);
	}
}