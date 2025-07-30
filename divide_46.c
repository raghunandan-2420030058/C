#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n%4==0 && n%6==0)
    {
        printf("Divisible by 4 and 6");
    }
    else 
    {
        printf("Not divisible by 4 and 6");
    }
}