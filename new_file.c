#include<stdio.h>
int main()
{
    FILE *fp = fopen("output.txt","w");
    fprintf(fp, "All the best");
    fclose(fp);
}