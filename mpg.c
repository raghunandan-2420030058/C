#include <stdio.h>
int main()
{
    int mpg, d, fc;

    printf("Enter distance covered ");
    scanf("%d", &d);

    printf("Enter fuel consumed ");
    scanf("%d", &fc);

    mpg = d / fc;
    printf("MPG is %d", mpg);
}