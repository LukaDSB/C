#include <stdio.h>
#include <stdlib.h>
int main (void){

int MatA[8][8];

	for (int i=0;i<8;++i){
		for (int j=0;j<8;++j){
		scanf("%d",&MatA[i][j]);
		}
	}
	
	system("cls");
	for (int i=0;i<8;++i){
		for (int j=0;j<8;++j){
		printf("%d    ",MatA[i][j]);
		}
	printf("\n\n");
	}
}

