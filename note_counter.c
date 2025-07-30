#include <stdio.h>

int main() {
    int x, y, z;
    int d[] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};

    scanf("%d %d", &x, &y);
    z = x - y;

    printf("Currency detail as %d\n", z);

    for (int i = 0; i < 10; i++) 
    {
        int c;
        c = z / d[i];
        printf("%d Note(s) of %d\n", c, d[i]);
        z %= d[i];  
    }
    return 0;
}
