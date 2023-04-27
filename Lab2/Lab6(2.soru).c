#include <stdio.h>
#include <stdlib.h>

int main() {
    int size, i, *arr, max;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Allocate memory for the array
    arr = (int*) malloc(size * sizeof(int));

    // Read elements into the array from the user
    for (i = 0; i < size; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    // Find the largest element in the array
    max = arr[0];
    for (i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("The largest element in the array is: %d\n", max);

    // Free memory
    free(arr);

    return 0;
}
