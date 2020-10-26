#include <stdio.h>
#include <stdlib.h>
int main ()
{
int Vet1[4];
	for (int i=0;i<4;++i){
		for (int j=0;j<4;++j){
			printf("Vetor A - Linha %i - coluna %i:",i,j);
			scanf("%i",&Vet1[i,j]);
		}
	}
	
system("cls");
	printf("\n-----Vetor A-----\n\n");
	for (int i=0;i<4;i++){
		for (int j=0;j<4;j++){
			printf("%i   ",Vet1[i,j]);
		}
	printf("\n\n");
	}
}

