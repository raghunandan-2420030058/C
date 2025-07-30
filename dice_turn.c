#include<stdio.h>
int main()
{
    int x, y;

    printf("Enter x value ");
    scanf("%d", &x);

    printf("Enter y value ");
    scanf("%d", &y);

    if (x + y > 6)
    {
        printf("Good turn");
    }
    else 
    {
        printf("Bad turn");
    }
    
}