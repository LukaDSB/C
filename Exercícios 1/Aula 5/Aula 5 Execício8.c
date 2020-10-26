#include <stdio.h>
#include <stdlib.h>
int main (void){
int soma, l, c, A[4][5];

	for(l = 0; l < 4; l++){
		for(c = 0; c < 5; c++){
			printf("Matriz A - Linha %i, coluna %i: \n", l, c);
				scanf("%i", &A[l][c]);
		}
	}
	
	system("cls");
	printf("-----Matriz A-----\n\n");
	for(l = 0; l < 4; l++){
		for(c = 0; c < 5; c++){
			printf("%i  ", A[l][c]);
		soma = (soma + A[l][c]);
		}
	printf("\n");
	}
	printf("\nA soma de todos os elementos da matriz e: %i", soma);
}