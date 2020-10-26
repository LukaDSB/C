#include <stdio.h>
#include <stdlib.h>

 struct funcionario {
 int cod;
 char nome[30];
 float salario;
 int depto;
 int cargo;
 };

 typedef struct funcionario Funcionario;

 int main()
 {
Funcionario func[10];
int i;
for (i=0; i<10; i++) {
printf("Informe o codigo: \n");
scanf("%d", &func[i].cod);
printf("Informe o nome: \n");
scanf("%s", &func[i].nome);
}

for (i=0; i<10; i++) {
printf("Codigo: %d \n", func[i].cod);
printf("Nome: %s \n", func[i].nome);
}
}

