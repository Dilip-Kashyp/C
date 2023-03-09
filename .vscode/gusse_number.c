# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main(){
    int number,guess,n=1;
    srand(time(0));
    number=rand()%100+1;
    // printf("The random number is %d\n ",number);
    do
    {
        printf("Guess the number\n");
        scanf("%d",&guess);
        
        if (guess>number)
        {
            printf("You guess larger number please guess smaller\n");
        }
        else if (guess<number )
        {
            printf("Yor guess is smaller please guess the large number \n");
        }
        else{
            printf("You guess the number in %d attempts\n",n);
        }
        n++ ;
    } while (guess != number );
    



    return 0;
}