#include<stdio.h>
int main()
{
  int a, b, n;
  scanf("%d %d", &a, &b);
  n = a;

  while (n <= b)
  {
    if (n % 4 == 0 && n % 6 == 0)
    {
      printf("%d ", n);
    }
    n++;
  }
}
