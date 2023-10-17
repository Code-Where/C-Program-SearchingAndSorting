#include<stdio.h>

// Function of Selection Sort Algorithm
void Selectionsort(int *arr, int size){
    int temp, i, j;
    for (i = 0; i < size; i++)
    {
        for (j = i+1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
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
    int arr[10], i;
    
    for (i = 0; i < 10; i++)
    {
        printf("Enter Value of position %d\n", i+1);
        scanf("%d", &arr[i]);
    }
    
    printf("Before Sorting Array\n");
    Traverse(arr, 10);
    Selectionsort(arr, 10);
    printf("After Sorting Array\n");
    Traverse(arr, 10);
    return 0;
}

