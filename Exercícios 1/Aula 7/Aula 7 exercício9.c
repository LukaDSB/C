#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float perimetro(int lado) { // soma dos lados, no caso do quadrado: lado*4.
return 4 * lado;
}

float area(int lado) { //base * altura.
return lado * lado;
}

float diagonal(int lado) {
return lado * sqrt(2); //lado * a raiz quadrada ... sqrt = raiz
}

 int main()
 {
 float lado, per, are, dia;

 	printf("Comprimento do lado do quadrado: \n");
 		scanf("%f", &lado);

 per = perimetro(lado);
 are = area(lado);
 dia = diagonal(lado);

 	printf("Perimetro do quadrado: %f\n", per);
 	printf("Area do quadrado: %f\n", are);
 	printf("Diagonal do quadrado: %f\n", dia);
 }