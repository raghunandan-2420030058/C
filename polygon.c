#include<stdio.h>
#include<math.h>
int main()
{
	int s, n, a;
	float pi = 3.14;
	
	printf("Enter number of sides ");
	scanf("%d", &n);
	
	printf("Enter side length ");
	scanf("%d", &s);
	
	a = (n * s * s) / (4 * tan(pi/n));
	printf("Area = %d", a);
}

