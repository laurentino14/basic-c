#include <stdio.h>
// Alias for another tyoe
typedef __int8_t int8;

int main(){
    printf("int8: %d bytes  |  int: %d bytes",sizeof(int8),sizeof(int));

    return 0;
}