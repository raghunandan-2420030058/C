#include<stdio.h>
int main()
{
    int base, height;
    printf("Enter the height of the triangle: ");
    scanf("%d", &height);
    printf("Enter the Base of the triangle: ");
    scanf("%d", &base);

    int area = (base * height)/2;

    printf("The area of the triangle is: %d", area);
    return 0;
}