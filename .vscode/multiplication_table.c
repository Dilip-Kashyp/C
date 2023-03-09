// Self made multiplication table programme 

# include <stdio.h>
int main(){
    int i,a=1,c;
    printf("Enter the table \n");
    scanf("%d",&i);
    while (a<=10)
    {
        printf("%d X %d = %d\n",i,a,i*a);
        a++;
    }

    return 0;
}
