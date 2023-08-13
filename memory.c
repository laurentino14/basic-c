#include <stdio.h>
#include <stdlib.h>

int main(){

    int *x;
    x = (int *) malloc(5 * sizeof(__int8_t));
    int i;
    for (i = 0;i < 5;i++){
        printf("%d\n", &x[i]);
    }
    x = (int *) realloc(x,2 * sizeof(__int8_t));
    for (i = 0;i < 5;i++){
        printf("\n\n%d\n", &x[i]);
    }

    return 0;
}