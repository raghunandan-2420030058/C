#include <stdio.h> 
int main()     
{  
  int a = 1, b, n;
  scanf("%d", &n);
  while (a <= n) 
  {  
    b = 1;            
    while (b <= a)   
    {  
      printf(" $"); 
      b++;   
    }  
    printf("\n");  
    a++;  
  }  
} 
