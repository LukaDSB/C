#include <stdio.h>
#include <stdlib.h>

typedef struct T_Data{
		int dia, mes, ano;
}Data;


int main (void){
Data d1, d2;
int soma;

		printf("-----Data 1----- \n\n");
		printf("Dia: \n");
			scanf("%d", &d1.dia);
		printf("Mes: \n");
			scanf("%d", &d1.mes);
		printf("Ano: \n");
			scanf("%d", &d1.ano);


		printf("-----Data 2-----\n\n");
		printf("Dia: \n");
			scanf("%d", &d2.dia);
		printf("Mes: \n");
			scanf("%d", &d2.mes);
		printf("Ano: \n");
			scanf("%d", &d2.ano);


		soma = (d2.dia - d1.dia);
		
		printf("Numero de dias entre as datas: %i", soma);
		
}