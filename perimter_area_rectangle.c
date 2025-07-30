#include<stdio.h>
int main()
{
    int l,b;
    printf("Enter the Length of the rectangle: ");
    scanf("%d", &l);
    printf("Enter the Breadth of the rectangle: ");
    scanf("%d", &b);

    int perimeter = 2 * ( l + b );
    printf("The Perimeter of the rectangle is: %d\n", perimeter);

    int area = l * b;
    printf("The Area of the rectangle is: %d\n", area);

    if ( perimeter > area )
    {
        printf("The perimeter of the reactangle is greater than it's area");
    }

    else 
    {
        printf("The area of the rectangle is greater than it's perimeter");
    }

    return 0;
}