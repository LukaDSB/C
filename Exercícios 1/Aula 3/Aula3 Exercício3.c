#include <stdio.h>
#include <stdlib.h>

int main () {

    for (int i = 1;i <= 500; ++i){
        if(i % 5 == 0){
            printf("\n%i", i);
        }
    }
}