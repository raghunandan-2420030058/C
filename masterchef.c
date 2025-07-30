#include<stdio.h>
int main()
{
    int x;

    printf("Enter position ");
    scanf("%d", &x);
    
    if (x <= 10)
    {
        printf("Selected for finals");
    }
    else
    {
        printf("Not selected");
    }
}