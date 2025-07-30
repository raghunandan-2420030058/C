#include<stdio.h>
int main()
{
    int n, t, x, y;
    t = 2;

    printf("Enter current volume ");
    scanf("%d", &x);

    printf("Enter wanted volume ");
    scanf("%d", &y);

    n = (x - y) / t;
    printf("Button should be pressed %d times", n);
}