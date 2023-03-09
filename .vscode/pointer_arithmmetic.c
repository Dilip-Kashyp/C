#include <stdio.h>
int main() {
    int i , j;
    i = 49 ;
    int *ptr = &i ;
    printf("The value of i is %u\n ",ptr); 
    ptr++;


    printf("The value of i is %u\n ",ptr);
    *ptr - *ptr == j;
    printf("%d \n",j ); 




    return 0 ;
}