#include<Stdio.h>
int main()
{
	int l, b, p, a;
	
	printf("Enter the length of the building ");
	scanf("%d", &l);
	
	printf("Enter the perimeter of the building ");
	scanf("%d", &p);
	
	b = (p / 2) - l;
	
	a = l * b;
	
	printf("The area of the building is %d", a);
}

