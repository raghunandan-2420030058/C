#include<stdio.h>
int main()
{
    int l,b;
    printf("Enter the Length of the rectangle: ");
    scanf("%d", &l);
    printf("Enter the Breadth of the rectangle: ");
    scanf("%d", &b);

    int area = l * b;

    printf("The area of the rectangle is: %d cm^2", area);
    return 0;

}