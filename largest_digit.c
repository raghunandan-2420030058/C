#include<stdio.h>
int main()
{
    int n, large = 0 ,r = 0;
    printf("Enter a number:");
    scanf("%d",&n);

    while(n > 0)
    {
        r = n % 10;
        if(r > large) 
        {
            large = r;
        }
        n = n / 10;
    }

    printf("The Biggest Bigit in the given number is %d",large);
    return 0;
}