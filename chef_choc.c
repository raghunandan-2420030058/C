#include <stdio.h>

int main() 
{
    int t;
    scanf("%d", &t);

    while (t > 0) 
    {
        int x, y, n;
        scanf("%d %d", &x, &y);
        
        if (y <= x)
        {
            n = y;
        }
        else
        {
            n = x + ((y-x)*2);
        }
        printf("%d", n);
        t--;
        
    }

}
