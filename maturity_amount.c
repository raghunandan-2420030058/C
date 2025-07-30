#include<stdio.h>
int main()
{
	int ma, p, i, d;
	
	printf("Enter principal amount ");
	scanf("%d", &p);
	
	printf("Enter interest rate ");
	scanf("%d", &i);
	
	printf("Enter duration ");
	scanf("%d", &d);
	
	ma = p + (p * i/100 * d);
	printf("Maturity amount = %d", ma);
}

