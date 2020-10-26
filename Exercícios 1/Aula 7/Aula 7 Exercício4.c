#include <stdio.h>
#include <stdlib.h>

float funcao(int n){
	int fat = 1, i;
	
	for(i = 2; i <=n; i++)
		fat *= i;
	return fat;
}

int main (void){
int n, fat = 0;

	printf("Informe o valor: \n");
		scanf("%i", &n);
		
	fat = funcao(n);
	printf("Numero informado: %i\n", n);
	printf("Fatorial do numero informado: %i", fat);
}