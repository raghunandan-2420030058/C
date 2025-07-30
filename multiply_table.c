#include<stdio.h>
int main()
{
    int n, a;
    scanf("%d", &a);
    n = 1;

    while (a >= n)
    {
        printf("%d x 1 = %d\n", n, 1*n);
        printf("%d x 2 = %d\n", n, 2*n);
        printf("%d x 3 = %d\n", n, 3*n);
        printf("%d x 4 = %d\n", n, 4*n);
        printf("%d x 5 = %d\n", n, 5*n);
        printf("%d x 6 = %d\n", n, 6*n);
        printf("%d x 7 = %d\n", n, 7*n);
        printf("%d x 8 = %d\n", n, 8*n);
        printf("%d x 9 = %d\n", n, 9*n);
        printf("%d x 10 = %d\n\n", n, 10*n);
        n = n + 1;
    }
}