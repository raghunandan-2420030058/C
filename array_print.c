#include<stdio.h>
int main()
{
    int a[5], i, s=0;
    printf("\nEnter the values: ");

    for (i = 0; i<5; i++)
    scanf("%d", &a[i]);
    printf("\nThe values are: ");

    for(i = 0; i<5; i++)
    printf("\n%d", a[i]);
}