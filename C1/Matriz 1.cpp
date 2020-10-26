#include <stdio.h>
#include <stdlib.h>
int main ()
{
int VetA[4];
	
	for(int i=0;i<4;++i){
		for(int j=0;j<4;++j){
		printf("Matriz A - Linha %i - Coluna %i.\n",i,j);
		
			scanf("%i",&VetA[i,j]);
		}
	}
system("cls");
	
	printf("-----Matriz A-----\n\n");
	for(int i=0;i<4;++i){
		for(int j=0;j<4;++j){
			printf("%i   ",VetA[i,j]);	
		}
	printf("\n\n");
	}
	
		
}
