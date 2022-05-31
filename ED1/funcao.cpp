#include<stdio.h>
#include<stdlib.h>

void menu(int *n){
	printf("[0] - Encerrar programa:\n");
	printf("[1] - Inserir valores iniciais:\n");
	printf("[2] - Imprimir valores:\n");
	printf("[3] - Atualizar valores:\n");
	printf("[4] - Incrementar valor de A recursivamente ate 10:\n");
	printf("[5] - Fibonacci:\n");
		scanf("%d",n);
}

void insertValores(int *a, int *b){
	system( " cls " );
	printf( " Informe o valor inicial de A: " );
		scanf( "%d", a );
	printf( " informe o valor inicial de B: " );
		scanf( "%d", b );
	system( " cls " );
}

void updateValores(int *a, int *b){
	system( " cls " );
	printf( " ----- Atualize os valores para A e B ----- \n\n" );
	printf( " Novo valor de A: " );
		scanf( "%d",a);
	printf( " Novo valor de B: " );
		scanf( "%d" ,b);
	system( " cls " );
}

void imprimeValores(int *a, int *b){
	system( " cls " );
	printf( "\n\nValor de A: %d\n", *a );
	printf( "Valor de B: %d\n\n", *b );

}

void incrementacaoRecursiva(int *a){
	printf("A: %d\n",*a);
	*a = *a +1;
	if( *a <= 10 ){
		incrementacaoRecursiva(a);
	}
}

int fib(int n){
	if(n == 1)
		return 0;
	if(n == 2)
		return 1;
	else
		return fib(n-1) + fib(n-2);
}

int main(){
	int primeiroValor, segundoValor,op=1;

	while( op != 0 ){
		menu(&op);
		switch(op){
			case(0):
				system("cls");
				printf("Programa encerrado.\n");
				break;
			case(1):
				insertValores(&primeiroValor,&segundoValor);
				break;
			case(2):
				imprimeValores(&primeiroValor,&segundoValor);
				break;
			case(3):
				updateValores(&primeiroValor,&segundoValor);
				break;
			case(4):
				system("cls");
				incrementacaoRecursiva(&primeiroValor);
				
			case(5):
				system("cls");
				int y = fib(primeiroValor);
				printf("%d\n\n",y);
		}
	}
	return 0;	
}
