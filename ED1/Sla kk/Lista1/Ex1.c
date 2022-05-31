#include <stdio.h>
#include <stdlib.h>

int funcao(int n){
    
    for(int i = 2; i <= n; i++){
        if(n % i == 0 && i % n == 0)
            return 1;
        else
            return 0;
    }

}

int main(){
int n;

    printf("Informe o numero que deseja testar: ");
        scanf("%d",&n);  

    funcao(n);

    return 0;
}


//   n  | i  | n mod i == 0? | i mod n == 0? |  return
//   10   2        f                 t             0
//   10   3        f                 f             0
//   10   10       t                 t             1