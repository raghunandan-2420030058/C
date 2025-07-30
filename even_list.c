#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a = 1;
    int b = 0;

    while (n > b)
    {
        if (a % 2 == 0)
        {
            printf("%d\n", a);
            b++;
        }
        a++;
    }
}
