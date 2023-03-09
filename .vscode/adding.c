# include <stdio.h>
int sum(int a, int b);
int main(){
    int c,a,b;
    printf("Enter the first value\n");
    scanf("%d",&a);
    printf("Enter the second value\n");
    scanf("%d",&b);
    c = sum(a, b);
    printf("The value is %d\n",c);
    
    int g,d,e;
    printf("Enter the first value\n");
    scanf("%d",&d);
    printf("Enter the second value\n");
    scanf("%d",&e);  
    g = sum(e, d);
    printf("The value is %d\n",g);

    return 0;
    }

int sum(int a, int b){
    int result;
    result = a + b ;\
    return result;
}