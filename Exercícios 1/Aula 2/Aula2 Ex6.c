#include <stdio.h>
int main() {
    float SalBruto, ValPrest, MaxPrest;

    printf("Informe seu salario bruto: ");
        scanf("%i", &SalBruto);

    MaxPrest = (SalBruto / 100) * 30;
    
    printf("Informe o valor da prestacao: ");
        scanf("%i", &ValPrest);

    if(ValPrest > MaxPrest){
        printf("O emprestimo nao pode ser concedido pois ultrapassa o valor maximo.");
    } else {
        printf("O empressstimo pode ser concedido.");
    }
    
}