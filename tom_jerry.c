#include<stdio.h>
int main()
{
    int x, y;

    printf("Enter jerry speed ");
    scanf("%d", &x);

    printf("Enter tom speed ");
    scanf("%d", &y);

    if ( y > x)
    {
        printf("Tom will catch jerry");
    }
    else
    {
        printf("Tom will not catch jerry");
    }
}