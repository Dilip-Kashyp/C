#include <stdio.h>
void array(int *ptr , int n ){
    for( int i = 0 ; i < n ; i++){
        printf("This value of %d  is %d\n",i+1 , *(ptr+i));
    }
}
int main(){
    int arr[]={23,45,34,37,87,64,53,54,57,67};
    array(arr , 10);


    return 0;
}