#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char a[3][20];
	int i;
	
	for(i = 0; i < 3; ++i){
		printf("Valor %i: ",i);
			scanf("%s",a[i]);
	}
system("cls");

	for(i = 0; i < 3; ++i){
		printf("%s\n", a[i]);
	}

}

