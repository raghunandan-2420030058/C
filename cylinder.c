#include<stdio.h>
int main()
{
	int r, h, a;
	float pi = 3.14;
	
	printf("Enter radius ");
	scanf("%d", &r);
	
	printf("Enter height ");
	scanf("%d", &h);
	
	a = (2 * pi * r * r) + (2 * pi * r * h);
	printf("Surface area of cylinder = %d", a);
}

