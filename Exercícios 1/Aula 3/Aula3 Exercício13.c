#include <stdio.h>
#include <stdlib.h>

int main (void){
//
short int cont, i = 0, n = 1;
float NumeroDoConsumidor[20] , Kwh[20], CodigoConsumidor[20], CustoTotal[20];
//		
			
system("cls");
	while(n != 0){
		printf("[0] - Fechar programa: \n");
		printf("[1] - Cadastrar consumidor: \n");
        printf("[2] - Imprimir cadastros:");
			scanf("%i", &n);
        system("cls");
        
        if(n == 1){
            printf("Numero do consumidor: \n");
		        scanf("%f", &NumeroDoConsumidor[i]);
	        printf("\nKwh consumidos: \n");
		        scanf("%f", &Kwh[i]);
	        printf("Codigo do consumidor: \n");
		        scanf("%f", &CodigoConsumidor[i]);
            i = i + 1;
        system("cls");
        }
        
        cont = i;
        for(i = 0; i < cont; ++i){
        if(CodigoConsumidor[i] == 1){
			CustoTotal[i] = Kwh[i] * 0.3;
			} else if(CodigoConsumidor[i] == 2){
			CustoTotal[i] = Kwh[i] * 0.5;
			} else if(CodigoConsumidor[i] == 3){
			CustoTotal[i] = Kwh[i] * 0.7;
			}
		}
		
		
		
        if(n == 2){
            system("cls");
            cont = i;
            for(i = 0; i < cont; i++){
                printf("-----CADASTRO %i-----\n\n", i);
                printf("Numero do consumidor: %0.0f\n", NumeroDoConsumidor[i]);
                printf("Custo total: %0.2fR$\n\n", CustoTotal[i]);
            }
        }
	}
} 