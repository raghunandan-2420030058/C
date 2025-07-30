#include<stdio.h>
#include <math.h>
int main()
{
	int s1, s2, h;
	
	printf("Enter side 1 ");
	scanf("%d", &s1);
	
	printf("Enter side 2 ");
	scanf("%d", &s2);
	
	h = sqrt((s1 * s1) + (s2 * s2));
	
	printf("Hypotenuse = %d", h);
}

