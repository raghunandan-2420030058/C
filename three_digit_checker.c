#include<stdio.h>
int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    if ( n > 99 && n < 1000 )
    {
        printf("The number is a three digit number");
    }
    else
    {
        printf("The number is not a three digit number");
    }
    return 0;
}