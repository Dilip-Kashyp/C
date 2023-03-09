# include <stdio.h>

void swap( int *a , int *b );

int main(){
    int a = 2 , b = 3 ;

    printf("The value of a and b is before swaping %d , %d \n", a , b ); 

    swap(&a , &b );

    printf("The value of a and b is after  swaping %d , %d \n", a , b ); 


    return 0;
}

void swap( int *a , int *b ){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}