# include <stdio.h>
int main(){
    int input, fact=1,i;
    printf("Enter the number \n");
    scanf("%d",&input);
    for (i = 1; i <=input; i++)
    {
        fact *=i;
    }
    printf("The factorial of %d is %d\n",input,fact);






    return 0;
}
