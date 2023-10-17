#include <stdio.h>

int minInd(int arr[], int l, int u)
{
    int i, min = l;
    for (i = l+1; i <= u; i++)
    {
        if (arr[min] > arr[i])
        {
            min = i;
        }
        
    }
    return min;
}

void Selectionsort(int arr[], int l, int size)
{
    if(l > size)
    {
        return;
    }
    int min = minInd(arr, l, size-1);
    int temp = arr[l];
    arr[l] = arr[min];
    arr[min] = temp;
    Selectionsort(arr, l+1, size);
}

void Traverse(int *arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("Value of %d position = %d\n", i + 1, arr[i]);
    }
}

int main()
{
    int arr[10], i;

    for (i = 0; i < 10; i++)
    {
        printf("Enter Value of position %d\n", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Before Sorting Array\n");
    Traverse(arr, 10);
    Selectionsort(arr, 0, 10);
    printf("After Sorting Array\n");
    Traverse(arr, 10);
    return 0;
}
