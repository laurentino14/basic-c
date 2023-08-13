#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE *p;

    p = fopen("./teste.txt","w");

    char textwrited[100];



    gets(textwrited);
    int i;
    for (i=0; i < strlen(textwrited); i++){
        fputc(textwrited[i],p);
    };

    fclose(p);


    return 0;
}