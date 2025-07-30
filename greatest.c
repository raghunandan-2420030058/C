#include<stdio.h>
int main()
{
	int a, b, c;
	
	printf("Enter a ");
	scanf("%d", &a);
	
	printf("Enter b ");
	scanf("%d", &b);
	
	printf("Enter c ");
	scanf("%d", &c);
	
	if (a > b)
	{
		if (a > c)
		{
			printf("a is greatest");
		}
		else
		{
			printf("c is greatest");
		}
	}
	else if (b > c)
	{
		printf("b is grestest");
	}
	else
	{
		printf("c is greatest");
	}
}
