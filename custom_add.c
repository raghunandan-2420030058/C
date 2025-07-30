#include<stdio.h>
int add (int, int);
int main()
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    c = add (a, b);
    printf("%d", c);
}

int add(int a, int b)
{
    int add;
    add = a + b;
}
