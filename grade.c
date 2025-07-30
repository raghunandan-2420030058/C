#include<stdio.h>
int main()
{
    int p;
    printf("Enter the percentage: ");
    scanf("%d", &p);

    if ( p >= 80 )
    {
        printf("Grade A");
    }
    else if ( p >= 70 )
    {
        printf("Grade B");
    }
    else if ( p >= 60 )
    {
        printf("Grade C");
    }
    else if ( p >= 50 )
    {
        printf("Grade D");
    }
    else if ( p >= 40 )
    {
        printf("Grade E");
    }
    else 
    {
        printf("Fail");
    }

    return 0;
}