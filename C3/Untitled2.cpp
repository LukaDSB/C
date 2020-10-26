#include <stdio.h>
#include <stdlib.h>

typedef struct T_Cadastro{
	char nome[30];
	float n1, n2, n3, md;	
} Vet;

int main (void){
Vet A[5];
int i;

	for (int i=0;i<2;i++){
		scanf("%f",&A[i].n1); 
	}
		
	for (i=0;i<2;i++){
		printf("%0.2f \n",A[i].n1);
	}
}
