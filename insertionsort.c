#include <stdio.h>

void insertionSort(int arr[], int n) {
    for (int i = 2; i < n; i++) {
        int TEMP = arr[i];
        int j = i - 1;
        while (j >= 1 && arr[j] > TEMP) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = TEMP;
    }
}


int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    insertionSort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}