#include <stdio.h>


int main(){
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(__int8_t));
    printf("%d\n", sizeof(__int16_t));
    printf("%d\n", sizeof(__int32_t));
    printf("%d\n", sizeof(__int64_t));


    printf("\n");
    printf("%d\n", sizeof(char));
    printf("%d\n", sizeof(float));  
    printf("%d\n", sizeof(double));  

    return 0;
}