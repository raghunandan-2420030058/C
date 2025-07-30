#include<stdio.h>
int main()
{
    int cp, sp;
    printf("Enter the Cost price: ");
    scanf("%d", &cp);

    printf("Enter the Selling price: ");
    scanf("%d", &sp);

    if ( cp > sp )
    {
        int loss = cp - sp;
        printf("The loss occurred is: %d", loss);
    }

    else if ( sp == cp )
    {
        printf("No Profit or Loss has Occured");
    }
    else 
    {
        int profit = sp - cp;
        printf("The Profit is: %d", profit);
    }
}