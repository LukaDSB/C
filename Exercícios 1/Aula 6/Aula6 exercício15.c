#include <stdio.h>
#include <stdlib.h>

typedef struct T_Agenda{
		char email[40], nome[10], sobrenome[20];
		int telefoneM, telefoneF;

}Agenda;

int main (void){
Agenda A[100];
int n = 9, i = 0, cont;

	while (n != 0){
		printf("[0] - Sair do programa: \n");
		printf("[1] - Cadastrar novo contato: \n");
		printf("[2] - Exibir contatos: \n");
			scanf("%i", &n);
		system("cls");
		
		if(n == 1){
			printf("-----Cadastro %i-----\n\n", i);
			printf("Nome: \n");
				scanf("%s", &A[i].nome);
			printf("Sobrenome: \n");
				scanf("%s", &A[i].sobrenome);
			printf("E-mail: \n");
				scanf("%s", &A[i].email);
			printf("Telefone movel: \n");
				scanf("%i", &A[i].telefoneM);
			printf("Telefone fixo: \n");
				scanf("%i", &A[i].telefoneF);
		i = i + 1;
		system("cls");
		}
		
		if(n == 2){
		cont = i;
			for(i = 0; i < cont; i++){
				printf("-----Cadastro %i-----\n\n", i);
				printf("Nome: %s\n", A[i].nome);
				printf("Sobrenome: %s\n", A[i].sobrenome);
				printf("E-mail: %s\n", A[i].email);
				printf("Telefone movel: %i\n", A[i].telefoneM);
				printf("Telefone fixo: %i\n\n", A[i].telefoneF);
			}
		}
	}
}