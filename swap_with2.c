#include<stdio.h>
int main()
{
    int a, b, temp;
    scanf("%d %d", &a, &b);

    printf("Before: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After: a = %d, b = %d", a, b);
}
