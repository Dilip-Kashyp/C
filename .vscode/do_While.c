# include <stdio.h>
int main(){
    int a = 0;
    int i;
    printf("Enter the value of i \n");
    scanf("%d",&i);
     
    do
    {
        printf("The value of a %d\n",a);
        a++;
    } while (a<=i );
    



    return 0;
}
