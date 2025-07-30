#include<stdio.h>
int main()
{
    int n, x;

    printf("Enter no.of people ");
    scanf("%d", &n);

    printf("Enter capacity ");
    scanf("%d", &x);

    if (n <= x)
    {
        printf("Can host");
    }
    else
    {
        printf("Cannot host");
    }
}