#include<stdio.h>
int main()
{
    int x, y;

    printf("Enter fastest time ");
    scanf("%d", &x);

    printf("Enter chef's time ");
    scanf("%d", &y);

    if (107/100 * x >= y)
    {
        printf("Race in main event");
    }
    else
    {
        printf("Cannot race in main event");
    }
}