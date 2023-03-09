# include <stdio.h>
void sumavg(int a , int b , int *sum , float *avg ){
    *sum = a + b ;
    *avg = (float)(*sum)/2;
}
int main(){

    int i=4, j=6;
    int sum ; 
    float avg ; 
    sumavg(i , j , &sum , &avg);
    
    printf("The sum of i and j is %d\n",sum);
    printf("The avg of i and j is %f\n",avg);


    return 0;
}
