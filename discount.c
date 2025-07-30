#include <stdio.h>
int main()
{
    int op, dp, dpp;
    
    printf("Enter original price ");
    scanf("%d", &op);

    printf("Enter discount percentage ");
    scanf("%d", &dp);

    dpp = op - (op*dp/100);
    printf("Discounted price is %d", dpp);
}
