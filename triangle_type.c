#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    if ((a == b && b != c) || (a == c && b != a) || (b == c && a != b))
    {
        printf("Isosceles");
    }
    else if (a == b && b == c)
    {
        printf("Equilateral");
    }
    else if (a != b && b != c)
    {
        printf("Scalene");
    }
}
