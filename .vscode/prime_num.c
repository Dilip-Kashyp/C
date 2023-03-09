# include <stdio.h>
int main(){
    int input , prime = 1 ;
    printf("Enter the value \n");
    scanf("%d",&input);
    for(int i=2;i<input;i++){
        if(input%i==0 ){
        prime = 0;
        break;
        }
    }
    if(prime==0){
        printf("This is not a prime number\n");
     }
    else{
        printf("This is a prime number\n");
    }
    return 0;
}
