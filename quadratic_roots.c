#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,d,x;
    scanf("%d %d %d", &a, &b, &c);
    d = (b * b - ( 4 * a * c));
    if ( d < 0 )
    {
        printf("The roots are Imaginary");
    }
    else if ( d >= 0 )
    {
        int r1, r2;
        r1 = (-b + sqrt(d))/ 2 * a;
        r2 = (-b - sqrt(d)) / 2 * a;
        printf("%d %d", r1, r2);
        return 0;
    }
    
}