#include<stdio.h>
int main()
{
    char c;
    scanf("%c", &c);
    if (c == 'R')
    {
        printf("Red");
    }
    else if (c == 'Y')
    {
        printf("Yellow");
    }
    else if (c == 'G')
    {
        printf("Green");
    }
    else if (c != 'R' || c != 'Y' || c != 'G')
    {
        printf("Invalid");
    }
}