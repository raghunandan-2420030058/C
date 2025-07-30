#include<stdio.h>
#include<math.h>
int main()
{
    int h, d;
    float pi = 3.14;
    double x, y;

    printf("Enter distance ");
    scanf("%d", &d);

    printf("Enter height ");
    scanf("%d", &h);

    x = atan(h/d);
    y = x * (180/pi);

    printf("Angle = %.2f", y);
}
