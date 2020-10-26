 #include <stdio.h>

 int main () {
 
 int A, B, C;

    printf("Informe o primeiro valor: ");
        scanf("%i", &A);
    printf("Informa o segundo valor: ");
        scanf("%i",&B);

    C = A + B;
    if(C > 20){
        C = C + 8;
        printf("%i", C);
    } else {
        if(C <= 20){
            C = C - 5;
            printf("%i", C);
        }
    }
 }