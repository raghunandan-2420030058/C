#include<stdio.h>
int main()
{
    int n, a, b, c, d, e, x;
    n = 10564;

    a = (n) % 10;
    b = (n/10) % 10;
    c = (n/100) % 10;
    d = (n/1000) % 10;
    e = (n/10000) % 10;

    x = a + b + c + d + e;

    printf("Sum = %d", x);
}
