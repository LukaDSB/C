#include <stdio.h>
int main ()
{
int i;

	printf("insida um numero inteiro de 1 a 5: \n");
	scanf("%i",&i);

	switch (i){
		case 1:
			printf("Primeiro");
			break;
		case 2:
			printf("Segundo");
			break;
		case 100:
			printf("Cem");
			break;
	}
return 0;
}
