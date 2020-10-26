#include <stdio.h>
#include <stdlib.h>

float calculaMult(int a, int b) {
	if (b > 0)
	return a + calculaMult(a, b-1);
		else
	return 0;
}

int main(){
int a, b;
float resultado;

	printf("Informe o valor de A:\n");
		scanf("%d", &a);
 	printf("Informe o valor de B:\n");
 		scanf("%d", &b);

 	resultado = calculaMult(a, b);

	printf("Resultado da multiplicacao por soma: %f \n", resultado);
}