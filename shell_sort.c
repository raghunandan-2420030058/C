#include<stdio.h>
int shell(int a[], int n)  
{  
    for (int gap = n/2; gap > 0; gap /= 2)  
    {  
        for (int i = gap; i < n; i ++)  
        {  
            int key = a[i];  
            int j;        
            for (j = i; j >= gap && a[j - gap] > key; j -= gap)
            {
                a[j] = a[j - gap];  
            }
            a[j] = key;  
        }  
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    shell(a, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}