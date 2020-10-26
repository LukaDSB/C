#include <stdio.h>
#include <stdlib.h>
typedef struct T_Endereco{
	char estado[30];
	char cidade[30];
	char bairro[30];
	char rua[40];
	int  numero;
}T_end;

typedef struct T_Cadastro{
	char nome[30];
	short idade;
	T_end ender;
}Cad;

int main (void)
{
Cad A[1];
int cont, n = 1, i = 0;

	while (n!=0){
		printf("[0] - Fechar programa:\n");
		printf("[1] - Cadastrar usuario:\n");
		printf("[2] - Imprimir cadastros:\n");
	 		scanf("%d",&n);
	 	system("cls");

		if (n==1){
			printf("Nome: \n");
				scanf("%s",&A[i].nome);
			printf("Idade: \n");
				scanf("%d",&A[i].idade);
			i=i+1;
		system("cls");
		}

		if (n==2){
			system("cls");
			cont=i;
			for (i=0;i<i;++i){
				printf("-----Cadastro %d-----\n",i);
				printf("Nome: %s\n",A[i].nome);
				printf("Idade: %d\n\n",A[i].idade);
			}
		}
	}
}
