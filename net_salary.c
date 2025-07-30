#include<stdio.h>
int main()
{
    int bs, hra, da, pf, ta, pt, gross, net;
    printf("Enter the Basic salary: ");
    scanf("%d", &bs);

    if ( bs >= 25000 )
    {
        hra = 0.15 * bs;
        printf("HrA = %d\n", hra);
        da = 0.10 * bs;
        printf("DA = %d\n", da);
        ta = 0.08 * bs;
        printf("TA = %d\n", ta);
        pf = 0.10 * bs;
        printf("PF = %d\n", pf);
        pt = 0.08 * bs;
        printf("PT = %d\n", pt);
        gross = bs + hra + da + ta;
        printf("Gross Salary = %d\n", gross);
        net = gross - pf - pt;
        printf("Net Gross = %d\n", net);
        printf("The Salary Would be: %d\n", net);
    }
    else 
    {
        printf("The Salary Would be: %d", bs);
    }
    return 0;

}