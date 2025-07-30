#include<stdio.h>
int main()
{
    int x, y;

    printf("Enter x price ");
    scanf("%d", &x);

    printf("Enter y price ");
    scanf("%d", &y);

    if (x > y)
    {
        printf("Pick y");
    }
    else
    {
        printf("Pick x");
    }
}