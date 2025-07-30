#include<stdio.h>
int isprime(int);
int main()
{
    int x, a, b;
    scanf("%d", &x);
    b = 0;
    a = 2;

    while (x > b)
    {
        if (isprime(a) == 1)
        {
            printf("%d\n", a);
            b++;
        }
        a++;
    }
}

int isprime(int a)
{
    for (int i = 2; i < a; i++) 
    {
        if (a % i == 0) 
        {
            return 0; //Composite
        }
    }
    return 1; //Prime
}
