#include <stdio.h>
int main()
{
    int s, d, t;

    printf("Enter distance ");
    scanf("%d", &d);

    printf("Enter time taken ");
    scanf("%d", &t);

    s = d / t;
    printf("Speed is %d", s);
}