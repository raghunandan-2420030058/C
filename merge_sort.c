#include<stdio.h>
void merge(int a[], int temp[], int low, int mid, int high)
{
    int k, h = low, i = low, j = mid + 1;
    while((h <= mid) && (j <= high))
    {
        if (a[h] < a[j])
        {
            temp[i++] = a[h++];
        }
        else
        {
            temp[i++] = a[j++];
        }
    }

    if (h > mid)
    {
        for(k = j; k <= high; i++, k++)
        {
            temp[i] = a[k];
        }
    }
    else
    {
        for(k = h; k <= mid; i++, k++)
        {
            temp[i] = a[k];
        }
    }
    for(k = low; k <= high; k++)
    {
        a[k] = temp[k];
    }
}

void mergesort(int a[], int temp[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        mergesort(a, temp, low, mid);
        mergesort(a, temp, mid+1, high);
        merge(a, temp, low, mid, high);
    }
}

int main()
{
    int n, i;
    scanf("%d", &n);

    int a[n], temp[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int low = 0, high = n-1;
    mergesort(a, temp, low, high);

    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

}