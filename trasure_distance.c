#include<stdio.h>
#include<math.h>
int main()
{
    int x1, x2, y1, y2, d;

    printf("Enter coordinates of A" );
    scanf("%d %d", &x1, &y1);

    printf("Enter coordinates of B ");
    scanf("%d %d", &x2, &y2);

    d = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    printf("Distance between A and B is %d", d);
}
