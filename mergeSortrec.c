//Merge Sort through recursion
#include <stdio.h>

void merge(int arr[], int lb, int mid, int ub)
{
    int beg = lb;
    int beg2 = mid + 1;
    int ind = 0, i, j;
    int merged[10];

    while (beg <= mid && beg2 <= ub)
    {
        if (arr[beg] >= arr[beg2])
        {
            merged[ind] = arr[beg2++];
        }
        else
        {
            merged[ind] = arr[beg++];
        }
        ind++;
    }

    while (beg <= mid)
    {
        merged[ind++] = arr[beg++];
    }

    while (beg2 <= ub)
    {
        merged[ind++] = arr[beg2++];
    }

    for (i = 0, j = lb; i < ind; i++, j++)
    {
        arr[j] = merged[i];
    }
}

void mergeSort(int arr[], int lb, int ub)
{
    if (lb < ub)
    {
        int mid = (lb + ub) / 2;
        mergeSort(arr, lb, mid);
        mergeSort(arr, mid + 1, ub);
        merge(arr, lb, mid, ub);
    }
}

void printArr(int *arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("Value of %d position = %d\n", i + 1, arr[i]);
    }
}

int main()
{
    int arr[] = {83, 38, 34, 18, 45, 56, 86, 56, 85, 75};
    printf("Before Sorting Array\n");
    printArr(arr, 10);
    mergeSort(arr, 0, 9);
    printf("After Sorting Array\n");
    printArr(arr, 10);
    return 0;
}
