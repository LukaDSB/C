#include <stdio.h>
#include <stdlib.h>
int main()
{
int soma,MAT1[3][5];

	for (int i=0;i<3;++i){
		for (int j=0;j<5;++j){
			printf("Matriz A - linha %d - coluna %d:",i,j);
			scanf("%d",&MAT1[i][j]);
		}
	}

system ("cls");	
	
	printf("-----Matriz A-----\n\n");
	for (int i=0;i<3;++i){
		for (int j=0;j<5;++j){
			printf("%d   ",MAT1[i][j]);
			if (i==j){
				soma=soma+(MAT1[i][j]);
			}
		}
	printf("\n\n");
	}
	printf("soma: %d",soma);
}
