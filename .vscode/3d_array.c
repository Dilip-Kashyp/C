#include <stdio.h>
int main(){
    int arry[2][3][4];
    for ( int i = 0; i < 5; i++){
        for ( int j = 0; j < 5; j++){
            for ( int k = 0; k < 5; k++){
                printf("The addrress of %d %d %d is %u\n",i, j, k ,&arry[i][j][k]);
        
            }
        }
    }
    


}