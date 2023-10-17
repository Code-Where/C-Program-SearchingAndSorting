#include<stdio.h>

void BubbleSort(int *arr, int size){
    int i, j;
    for (i = 0; i < size-2; i++)
    {
        for (j = 0; j < size-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
}

void Traverse(int *arr, int size){
    int i;
    for (i = 0; i < size; i++)
    {
        printf("Value of %d position = %d\n", i+1, arr[i]);
    }
    
}

int main(){
    int arr[] = {83, 38, 34, 18, 45, 56, 86, 56, 85, 75};
    printf("Before Sorting Array\n");
    Traverse(arr, 10);
    BubbleSort(arr, 10);
    printf("After Sorting Array\n");
    Traverse(arr, 10);
    return 0;
}