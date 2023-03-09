# include <stdio.h>
int main(){
    int i = 30 ;
    int *j = &i ;
    printf("The value of i is %d\n",i);
    printf("The adderss of i is %u\n",&i);
    printf("The value of j is %d\n",*j);
    printf("The value of j is %d\n",&(*j));
    printf("The adderss of j is %u\n",&j);

    return 0;
}
