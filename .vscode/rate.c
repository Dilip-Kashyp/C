#include <stdio.h>
int main()
{
    float principle, rate, year;
    printf("Enter the principle\n");
    scanf("%f",&principle);

    printf("Enter the rate\n");
    scanf("%f",&rate);

    printf("Enter the year\n");
    scanf("%f",&year);

    printf("Sample interst is %f",(principle*rate*year)/100);

    return 0;
}