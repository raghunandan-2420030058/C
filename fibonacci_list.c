#include <stdio.h>
int printFibonacci(int);
int main() 
{
  int n;
  scanf("%d", &n);
 
  printFibonacci(n);
  return 0;
}

int printFibonacci(int n) 
{
  int a = 0, b = 1, next;
 
  printf("%d ", a);
 
  if (n > 0) 
  {
    printf("%d ", b); 
  }

  for (int i = 2; i <= n; i++) 
  {
    next = a + b; 
    printf("%d ", next);
    a = b; 
    b = next; 
  }
  printf("\n");
}