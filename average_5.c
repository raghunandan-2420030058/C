#include<stdio.h>
int main()
{
    int a,b,c,d,e,avg;
    printf("Enter the Numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    avg = (a + b + c + d + e)/5;
    printf("The Average of the above numbers is: %d", avg);
    return 0;
}