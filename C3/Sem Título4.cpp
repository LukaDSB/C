#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct T_Cad
{
    float salario, reajuste;
}Cad;



int main(){
Cad A[20];
short int cont, n = 9, i = 0;

    while (n != 0 )
    {
        printf("[0] - Fechar programa.\n");
        printf("[1] - Cadastrar novo usuario.\n");
        printf("[2] - Imprimir cadastros.\n");
            scanf("%i", &n);
        system("cls");
    
        if(n == 1){
            printf("------Cadastro %i------\n\n", i);
            printf("Informe o salario: \n");
                scanf("%f", &A[i].salario);
            system("cls");
        A[i].reajuste = A[i].salario + (A[i].salario * 0.08);
		i = i + 1;
        }

        if(n == 2){
        cont = i;
            for(i = 0; i < cont; i++){
                printf("------Cadastro %i------\n\n", i);
                printf("Salario anterior: %0.2f\n", A[i].salario);
                printf("Salario reajustado: %0.2f\n\n", A[i].reajuste);
            }
        } 
    }
    
}
