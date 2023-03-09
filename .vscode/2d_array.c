#include <stdio.h>
void table(int *mul , int num , int n){
        printf("Multiplication table of %d\n",num);

    for ( int i = 0; i < n; i++)
    {
        mul[i] = num*(i+1);
    }
    for ( int  i = 0; i < n; i++)
    {
        printf("%d X %d = %d\n",num , i+1 , mul[i]);

    }
        printf("\n**************\n");
    
}
int main(){

    int x;
    int y;
    int z;
    int mul[3][10];

    printf("Enter the first table you want\n");
    scanf("%d",&x);

    printf("Enter the second table you want\n");
    scanf("%d",&y);

    printf("Enter the third table you want\n");
    scanf("%d",&z);

    table(mul[0] , x , 10 );
    table(mul[1] , y , 10 );
    table(mul[2] , z , 10 );

    return 0;
}