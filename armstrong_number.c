#include <stdio.h>
#include <math.h>
int main() 
{
    int num, original, remainder, result = 0, n = 0;
    scanf("%d", &num);

    original = num;

    while (original != 0) 
    {
        original = original/10;
        n++;
    }

    original = num;

    while (original != 0) 
    {
        remainder = original % 10;
        result = result + pow(remainder, n);   
        original = original/10;             
    }

    if (result == num)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not an Armstrong number");
    }
}
