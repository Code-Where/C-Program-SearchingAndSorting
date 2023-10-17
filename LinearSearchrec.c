//Linear Search through recursion
#include<stdio.h>

int linearSearch(int arr[], int key, int index, int n) {
    if (index >= n)
        return -1;
    
    if (arr[index] == key)
        return index;

    linearSearch(arr, key, index + 1, n);
}
int main(){
    int arr[10], i, key;

    for (i = 0; i < 10; i++)
    {
        printf("Enter Value of position %d\n", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Enter Value to be searched\n");
    scanf("%d", &key);
    int result = linearSearch(arr, key, 0, 10);

    if (result == -1) {
        printf("Element %d not found in the array.\n", key);
    } else {
        printf("Element %d found at position %d.\n", key, result+1);
    }    
    return 0;
}
