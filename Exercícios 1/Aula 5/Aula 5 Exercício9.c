#include <stdio.h>
#include <stdlib.h>
int main (void){
int l, c, A[3][5], SOMALINHA[3];

	for(l = 0; l < 3; l++){
	SOMALINHA[l] = 0;
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
	
	for(l = 0; l < 3; l++){
		for(c = 0; c < 5; c++){
				SOMALINHA[l] += A[l][c];	
		}
	}
	
	printf("-----Matriz SOMALINHA-----\n\n");
	for(l = 0; l < 3; l++){
		printf("%i  ", SOMALINHA[l]);
	}
}