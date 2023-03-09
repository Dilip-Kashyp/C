#include <stdio.h>

int main(){
    // int str[]={'i','s','d','d','\0'};
    char str[] = "Dilip";
    char *ptr = str;
    while(*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    printf("\n");


    return 0;
}