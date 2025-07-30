#include<stdio.h>
int main()
{
    int l,b;
    printf("Enter the Length of the rectangle: ");
    scanf("%d", &l);
    printf("Enter the Breadth of the rectangle: ");
    scanf("%d", &b);
    
    int perimeter = 2 * ( l + b );

    printf("The Perimeter of the rectangle is: %d", perimeter);
    return 0;
}