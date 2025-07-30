#include<stdio.h>
int main()
{
    int x;
    printf("Enter battery health ");
    scanf("%d", &x);

    if (x >= 80)
    {
        printf("Optimal");
    }
    else
    {
        printf("Not optimal");
    }
}