#include <stdio.h>
#include <stdlib.h>

int ackermann(int m, int n){
	if (m == 0){
		return (n+1);
	}else if ((m > 0) && (n == 0)){
		return ackermann(m-1, 1);
}else if ((m > 0) && (n > 0)){
	return ackermann(m-1, ackermann(m, n-1));
}
}

int main(){
int m, n, resultado;

	printf("Digite o valor de m e n: ");
 		scanf("%d %d", &m, &n);
		resultado = ackermann(m, n);
	printf("A(%d,%d) = %d\n", m, n, resultado);
}