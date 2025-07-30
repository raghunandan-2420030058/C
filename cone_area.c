#include<stdio.h>
int main()
{
    int r, a, l;
    float pi = 3.14;

    printf("Enter radius ");
    scanf("%d", &r);

    printf("Enter slant height ");
    scanf("%d", &l);

    a = pi * r * (r+l);
    printf("Surface area of cone = %d", a);
}