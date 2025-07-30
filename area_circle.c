#include <stdio.h>
int main ()
{
    int r, a;
    float pi = 3.14;

    printf("Enter radius ");
    scanf("%d", &r);

    a = pi * r * r;
    printf("Area of circle is %d", a);
}