#include <stdio.h>

int main()
{
    float principle, time, rate, SI;   /* Taking the datatypes */

    printf("Enter principle : ");
    scanf("%f", &principle);

    printf("Enter time: ");
    scanf("%f", &time);

    printf("Enter rate: ");
    scanf("%f", &rate);

    SI = (principle * time * rate) / 100;  

    printf("Simple Interest = %f", SI);

    return 0;
}
