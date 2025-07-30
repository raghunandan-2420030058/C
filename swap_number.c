#include<stdio.h>
int main()
{
    int a, b, temp;
    scanf("%d %d", &a, &b);

    printf("Before: a = %d, b = %d\n", a,b);

    temp = a; 
    a = b; 
    b = temp;
    
    printf("After: a = %d, b = %d\n", a,b);
}
