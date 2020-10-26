#include <stdio.h>
#include <stdlib.h>

typedef struct T_Cad{
		int NumCamisa;
		float Altura, Peso;
		char Posicao[30];

}Cad;

int main (void){
Cad A[22];
int cont, n = 9, i = 0;


		while(n != 0){
			printf("[0] - Sair do programa. \n");
			printf("[1] - Cadastrar novo jogador. \n");
			printf("[2] - Exibir cadastros. \n");
				scanf("%i", &n);
			system("cls");
			
			if(n == 1){
				printf("Numero da camisa: \n");
					scanf("%i", &A[i].NumCamisa);
				printf("Altura: \n");
					scanf("%f", &A[i].Altura);
				printf("Peso: \n");
					scanf("%f", &A[i].Peso);
				printf("Posicao: \n");
					scanf("%s", A[i].Posicao);
			i = i + 1;
			system("cls");
			}
			
			if(n == 2){
			cont = i;
				for(i = 0; i < cont; i++){
					printf("-----Cadastro %i-----\n\n", i);
					printf("Numero da camisa: %i\n", A[i].NumCamisa);
					printf("Altura: %0.2f \n", A[i].Altura);
					printf("Peso: %0.2f \n", A[i].Peso);
					printf("Posicao: %s \n\n", A[i].Posicao);
				}	
			}
		}
}