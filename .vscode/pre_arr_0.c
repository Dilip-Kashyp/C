#include <stdio.h>
int main(){
    int arr[10];
    int *ptr = arr ;
    ptr = ptr + 2 ;
    if(ptr == &arr[2]){
        printf("The pointer location is same\n");
    }
    else {

        printf("The pointer location is not same\n");
    }


    return 0 ;
}