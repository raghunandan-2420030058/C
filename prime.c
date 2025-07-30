#include <stdio.h>
int main() 
{
    int n;
    printf("Enter a number ");
    scanf("%d", &n);

    if (n <= 1) 
    {
        printf("Invalid");
        return 0;
    }

    for (int i = 2; i < n; i++) 
    {
        if (n % i == 0) 
        {
            printf("Composite");
            return 0;
        }
    }
    printf("Prime");
}
