#include<stdio.h>
int main()
{
    int x, y, n;

    printf("Enter no.of pages ");
    scanf("%d", &n);

    printf("Enter pages per day ");
    scanf("%d", &x);

    printf("Enter days left ");
    scanf("%d", &y);

    if (x * y >= n)
    {
        printf("Can finish the book");
    }
    else
    {
        printf("Cannot finish");
    }
}