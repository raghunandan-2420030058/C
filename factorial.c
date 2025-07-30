#include<stdio.h>
int main()
{
	int i,num;
	long long int fact = 1;
	printf("Enter Number : ");
	scanf("%d",&num);

	if(num<0)
	{
	printf("Factorial is not defined");
	}
	else 
	{
		for ( i = 1; i <= num; i++ )
		fact = fact * i;
	}
printf("Factorial = %lld\n", fact);
return 0;
}