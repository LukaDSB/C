#include <stdio.h>
int main ()
{
	float a,b,c;
	
	printf("Digite o valor A: \n");
	scanf("%f",&a);
	printf("Digite o valor B: \n");
	scanf("%f",&b);
	c=(a+b)/2;
	printf("A media dos valores informados e: %f\n",c);
	
	if (c >=6){
	printf("Voce foi aprovado(a)!");
	} else{
	printf("Voce foi reprovado(a)");
	}
return 0;
}
