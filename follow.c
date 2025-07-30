#include<stdio.h>
int main()
{
    int x, y;
    
    printf("Enter following count ");
    scanf("%d", &x);

    printf("Enter follower count ");
    scanf("%d", &y);

    if (x == 10*y)
    {
        printf("Spam account");
    }
    else
    {
        printf("Not spam");
    }
}