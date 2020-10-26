 #include <stdio.h>
 #include <stdlib.h>

int main () {
system("cls");
    char nome[20][20];
    int i, idade[20], 
    char sexo[20];

    for (i = 0; i < 20; ++i){
        printf("\nNome: ");
            scanf("%s",nome[i]);
        printf("\nIdade: ");
            scanf("%i", &idade[i]);
        printf("\nsexo: Masculino > 1  Feminino > 2 ");
            scanf("%i",&sexo[i]);
    system("cls");
    }
//system("cls");

    printf("-----Pessoas do sexo masculino-----\n\n");
    for (i = 0; i < 20; ++i){
        if(sexo[i] == 'm'){
            printf("\nNome: %s", nome[i]);
            printf("\nIdade: %i\n", idade[i]);
        }
    }
}