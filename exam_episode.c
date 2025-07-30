#include<stdio.h>
int main()
{
    int x, n;
    x = 24;

    printf("Time left till exam ");
    scanf("%d", &n);

    if (n > x)
    {
        printf("Finish before exam");
    }
    else
    {
        printf("Cannot finish before exam");
    }
}