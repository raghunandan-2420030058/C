#include<stdio.h>
int main()
{
    int p,r,t,s;
    printf("Enter the Principal amount: ");
    scanf("%d", &p);
    printf("Enter the rate of interest: ");
    scanf("%d", &r);
    printf("Enter the Time period: ");
    scanf("%d", &t);
    s = ( p * r * t)/100;
    printf("The Simple Interest is: %d", s);
    return 0;
}