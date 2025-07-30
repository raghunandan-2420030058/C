#include<stdio.h>
int main()
{
	int x1, x2, y1, y2, s;
	
	printf("Enter first coordinates (x1 y1) ");
	scanf("%d %d", &x1, &y1);
	
	printf("Enter second coordinates (x2 y2) ");
	scanf("%d %d", &x2, &y2);
	
	s = (y2 - y1)/(x2 - x1);
	printf("Slope = %d", s);
}

