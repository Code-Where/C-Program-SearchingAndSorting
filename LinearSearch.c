#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
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
    int result = linearSearch(arr, 10, key);

    if (result == -1) {
        printf("Element %d not found in the array.\n", key);
    } else {
        printf("Element %d found at position %d.\n", key, result+1);
    }

    return 0;
}