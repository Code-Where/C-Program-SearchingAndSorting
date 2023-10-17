#include <stdio.h>

int binarySearch(int arr[], int l, int u, int key) {
    int mid = (u - l)/2;
    if (l > u) 
    {
        return -1;
    }
    if (arr[mid] == key)
    {
        return mid;
    }
    else if (arr[mid] > key){
        u = mid-1;
    }
    else{
        l = mid+1;
    }
    
    binarySearch(arr, l, u, key); 
}

int main() {
    int arr[10], i, key;
    
    for (i = 0; i < 10; i++)
    {
        printf("Enter Value of position %d\n", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Enter Value to be searched\n");
    scanf("%d", &key);
    int result = binarySearch(arr, 0, 10, key);

    if (result == -1) {
        printf("Element %d not found in the array.\n", key);
    } else {
        printf("Element %d found at position %d.\n", key, result+1);
    }

    return 0;
}