#include<stdio.h>
int main()
{
    int n, a, b;
    a = 1;
    b = 0;
    scanf("%d", &n);
    while (n >= a)
    {
        if (a%2==0)
        {
            b = b + a;
        }
        a = a + 1;
    }
    printf("%d", b);
}
