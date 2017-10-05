#include <stdio.h>
 
void mergeSort(int [], int, int, int);
void divide(int [],int, int);
void divide(int a[],int low,int high)
{
    int mid;
 
    if(low < high)
    {
        mid = (low + high) / 2;
       divide(a, low, mid);
       divide(a, mid + 1, high);
        mergeSort(a, low, mid, high);
    }
}
 
void mergeSort(int a[],int low,int mid,int high)
{
    int i, mid1, k, lo, temp[50];
 
    lo = low;
    i = low;
    mid1 = mid + 1;
    while ((lo <= mid) && (mid1 <= high))
    {
        if (a[lo] <= a[mid1])
        {
            temp[i] = a[lo];
            lo++;
        }
        else
        {
            temp[i] = a[mid1];
            mid1++;
        }
        i++;
    }
    if (lo > mid)
    {
        for (k = mid1; k <= high; k++)
        {
            temp[i] = a[k];
            i++;
        }
    }
    else
    {
        for (k = lo; k <= mid; k++)
        {
             temp[i] = a[k];
             i++;
        }
    }
 
    for (k = low; k <= high; k++)
    {
        a[k] = temp[k];
    }
} 
int main()
{
    int a[10];
    int i, size;
 
    printf("Enter total number of elements:");
    scanf("%d", &size);
    printf("Enter the elements:\n");
    for(i = 0; i < size; i++)
    {
         scanf("%d", &a[i]);
    }
    divide(a, 0, size - 1);
    printf("After merge sort:\n");
    for(i = 0;i < size; i++)
    {
         printf("%d   ",a[i]);
    }
 
   return 0;
}

