#include <stdio.h>
#include <stdlib.h>

int main(){
short int A = 1;

    for(int i = 0; i < 100; i++){
        if(A % 2 == 0)
        printf("%d\n", A);
    	A = A+1;
	}
}