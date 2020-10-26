 #include <stdio.h>

 int main () {
 
 int A, B, C;

    printf("Informe o primeiro valor: %i", &A);
       // scanf("%i", &A);
    printf("Informa o segundo valor: ");
        scanf("%i",&B);

    C = A + B;
    if(C > 10){
        printf("%i", C);
    }
 }