#include <stdio.h>
#include <stdlib.h>

int main() {
    int Y, N[20] = {0,1};

    for (Y = 2; Y < 20; ++Y){
        N[Y] = N[Y-1] + N[Y-2];
    }
system("cls");
    for (Y = 0; Y < 20; ++Y){
        printf("%i\n", N[Y]);
    }
}