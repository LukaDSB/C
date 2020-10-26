#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct T_Cad
{
    char flag[13], nome[30];
    float nota1, nota2, media;
}Cad;


int main () {
//
Cad A[15];
int cont, i = 0, n = 9;
//


    while(n != 0){

        printf("[0] - Sair do programa.\n");
        printf("[1] - Cadastrar novo aluno.\n");
        printf("[2] - Imprimir cadastros.\n");
            scanf("%i", &n);
system("cls");

    	if(n == 1){
        
            	system("cls");
            	printf("------Cadastro %i------\n\n", i);
            	printf("Nome: \n");
                	scanf("%s", A[i].nome);
            	printf("Nota 1: \n");  
                	scanf("%f", &A[i].nota1);
            	printf("Nota 2: \n");
                	scanf("%f", &A[i].nota2);
        		A[i].media = (A[i].nota1 + A[i].nota2) / 2;
       		i = i + 1;
		}
		system("cls");
		
    	if(n == 2){
    	cont = i;
        	for(i = 0; i < cont; ++i){
        	if(A[i].media >=7){
        		strcpy(A[i].flag,"Aprovado!");
			} else{
				strcpy(A[i].flag,"Reprovado!");
			}
            	printf("------Cadastro %i------\n\n", i);
       	    	printf("Nome: %s\n", A[i].nome);
        	    printf("Media: %0.2f\n", A[i].media);
        	   	printf("Situacao do aluno: %s\n\n", A[i].flag);
        	}
    	}    
	}
}