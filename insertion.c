#include<stdio.h>

// Function of Selection Sort Algorithm
void Selectionsort(int *arr, int size){
    int temp, i, j;
    for (i = 1; i < size; i++)
    {
        for (j = i; j > 0; j--)
        {
            if(arr[j] < arr[j-1]){
                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j] = temp;
            }
            
        }
        
    }
}

void printArr(int *arr, int size){
    int i;
    for (i = 0; i < size; i++)
    {
        printf("Value of %d position = %d\n", i+1, arr[i]);
    }
    
}

int main(){
    int arr[] = {83, 38, 34, 18, 45, 56, 86, 56, 85, 75};
    printf("Before Sorting Array\n");
    printArr(arr, 10);
    Selectionsort(arr, 10);
    printf("After Sorting Array\n");
    printArr(arr, 10);
    return 0;
}

