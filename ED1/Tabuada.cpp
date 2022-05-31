#include <stdio.h>
#include <stdlib.h>

void encerrarPrograma(){
	system("cls");
	printf("Programa encerrado...\n\n");
}

void menu(int *op){
	printf("[0] - Encerrar programa.\n");
	printf("[1] - Tabuada.\n");
		scanf("%d",op);
}

void tabuada(){
int valorA, valorM;

	printf("Qual tabuada deseja saber: \n");
		scanf("%d",&valorA);
	system("cls");
		
	printf("===== Tabuada de %d =====\n\n", valorA);
	for(int i = 0; i != 11; i++){
		valorM = valorA * i;
		printf("%d x %d = %d\n",valorA, i, valorM);
	}
	printf("\n\n");
}

int main () {
int valorA, op=1;

while( op != 0 ){
	menu(&op);
	switch(op){
	case 0:
		encerrarPrograma();
		break;
	case 1:
		tabuada();
		break;
	}
}

}
