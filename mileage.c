#include<stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    if (y/15 > x)
    {
        printf("Chef cannot");
    }
    else
    {
        printf("Chef can");
    }
}