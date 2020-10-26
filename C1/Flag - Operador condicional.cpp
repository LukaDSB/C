#include <stdio.h>
int main ()
{
	int a=10;
	int b=20;
	int flag;
	a < b ? printf("Verdadeiro.\n") : printf("Falso.\n");
	a < b ? flag = 1 : flag = 2;
	
	printf("%i",flag);

return 0;
}
