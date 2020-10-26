#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main (){
int Prato, Sobremesa, Bebida, TotCal;
char P[20], S[20], B[20];

system("cls");
printf("\nSelecione um prato: ");
printf("\n[1] - Vegetariano.");
printf("\n[2] - Peixe.");
printf("\n[3] - Frango."); 
printf("\n[4] - Carne.\n");
    scanf("%i", &Prato);
system("cls");

printf("\nSelecione uma sobremesa: ");
printf("\n[1] - Abacaxi ");
printf("\n[2] - Sorvete diet");
printf("\n[3] - Mousse diet");
printf("\n[4] - Mousse chocolate\n");   
    scanf("%i", &Sobremesa);
system("cls");

printf("\nSelecione uma bebida: ");
printf("\n[1] - Cha");
printf("\n[2] - Suco de laranja");
printf("\n[3] - Suco de melao");
printf("\n[4] - Refrigerante diet\n");
    scanf("%i", &Bebida);
system("cls");




    switch (Prato)
    {
    case 1:
        Prato = 120;
        strcpy(P,"Vegetariano.");
        break;
    case  2:
        Prato = 230;
        strcpy(P,"Peixe.");
        break;
    case 3:
        Prato = 250;
        strcpy(P,"Frango.");
        break;
    case 4:
        Prato = 350;
        strcpy(P,"Carne.");
        break;
    }

    switch (Sobremesa)
    {
    case 1:
        Sobremesa = 75; 
        strcpy(S,"Abacaxi.");
        break; 
    case 2:
        Sobremesa = 110;
        strcpy(S,"Sorvete diet.");
        break;
    case 3:
        Sobremesa = 170;
        strcpy(S,"Mousse diet.");
        break;
    case 4:
        Sobremesa = 200;
        strcpy(S,"Mousse de chocolate.");
        break;
    }

    switch (Bebida)
    {
    case 1:
        Bebida = 20;
        strcpy(B,"Cha");
        break;
    case 2:
        Bebida = 70;
        strcpy(B,"Suco de laranja");
        break;
    case 3:
        Bebida = 100;
        strcpy(B,"Suco de melao");
        break;
    case 4:
        Bebida = 65;
        strcpy(B,"Refrigerante diet");
        break;
    }

    TotCal = Prato + Sobremesa + Bebida;

    printf("\n-----Seu pedido-----\n ");
    printf("\nPrato: %s\nSobremesa: %s\nBebida: %s\n\n", P, S, B);  
    printf("A soma das calorias e: %i\n\n",TotCal);
}