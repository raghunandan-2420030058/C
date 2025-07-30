#include<stdio.h>
int main()
{
  int a, b, n;
  scanf("%d %d", &a, &b);

  n = a;
  printf("Even: ");
  while (n <= b)
  {
    if (n % 2 == 0)
    {
      printf("%d ", n);
    }
    n = n + 1;
  }

  n = a;
  printf("\nOdd: ");
  while (n <= b)
  {
    if (n % 2 != 0)
    {
      printf("%d ", n);
    }
    n = n + 1;
  }

}
