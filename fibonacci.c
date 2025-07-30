#include <stdio.h>
int fibonacci(int n);
int main() 
{
    int N;
    scanf("%d", &N);

    if (N < 1 || N > 100) 
    {
        return 1;
    }

    printf("%d\n", fibonacci(N));
    return 0;
}

int fibonacci(int n) 
{
    if (n == 1) 
    {
        return 0; 
    }
    if (n == 2) 
    {
        return 1;
    }

    int a = 0, b = 1, next;

    for (int i = 3; i <= n; i++) 
    {
        next = a + b; 
        a = b; 
        b = next;
    }

    return b; 
}