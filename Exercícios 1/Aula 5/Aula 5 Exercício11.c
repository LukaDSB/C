#include <stdio.h>
#include <stdlib.h>
int main (void){
int l, c, A[3][3], B[3][3];

	for(l = 0; l < 2; l++){
		for(c = 0; c < 3; c++){
			printf("Matriz A - linha %i, coluna %i: \n", l, c);
				scanf("%i", &A[l][c]);
		}
	}
	system("cls");
	
	printf("-----Matrix 2x3-----\n\n");
	for(l = 0; l < 2; l++){
		for(c = 0; c < 3; c++){
			printf("%i    ", A[l][c]);
		}
	printf("\n\n");
	}
	
	for(l = 0; l < 2; l++){
		for(c = 0; c < 3; c++){
			B[l][c] = A[l][c];
		}
	}
	
		printf("-----Matrix 3x2-----\n\n");
	for(l = 0; l < 3; l++){
		for(c = 0; c < 2; c++){
			printf("%i    ", B[c][l]);
		}
	printf("\n\n");
	}
}