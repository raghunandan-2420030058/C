#include<stdio.h>
int main()
{
    int n, reverse = 0;
    scanf("%d", &n);

    int original = n;

    while ( n > 0 )
    {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n /10;
    }

    if (original == reverse)
    {
        printf("It is a palindrome");
    }
    else 
    {
        printf("It is not a palindrome");
    }

}