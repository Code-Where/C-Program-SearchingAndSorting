#include <stdio.h>

int binarySearch(int arr[], int n, int key) {
    int l = 0, u = n-1, mid;
    while(l<u)
    {
        mid = (u-l)/2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid] > key){
            u = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    return -1; 
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
    int result = binarySearch(arr, 10, key);

    if (result == -1) {
        printf("Element %d not found in the array.\n", key);
    } else {
        printf("Element %d found at position %d.\n", key, result+1);
    }

    return 0;
}