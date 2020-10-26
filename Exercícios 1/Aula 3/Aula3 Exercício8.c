#include <stdio.h>
#include <stdlib.h>

void CADASTRO() 
{

}


void main () 
{

    char nome[10][20];
    float salario[10];
    short int i;
system("cls");

    for (i = 0; i < 3;++i){
        printf("-----Cadastro %i-----\n\n",i);
        printf("Nome: \n");
            scanf("%s", nome[i]);
        printf("Salario bruto: \n");
            scanf("%f", &salario[i]);
system("cls");
    }

    for(i = 0; i < 3; ++i){
        if(salario[i] < 1300){
            salario[i] = salario[i];
        } else if(salario[i] >= 1300 && salario[i] < 2300){
            salario[i] = salario[i] - (10 * salario[i]) / 100;
        }else if(salario[i] >= 2300){
            salario[i] = salario[i] - (15 * salario[i]) / 100;
        }
    }
system("cls");
    for(i = 0; i < 3; ++i){
      printf("-----Cadastro %i-----\n\n", i);
      printf("Nome: %s\n", nome[i]);
      printf("Salario ajustado: %0.2f\n\n", salario[i]);
    }
}