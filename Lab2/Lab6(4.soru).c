#include <stdio.h>
#include <stdlib.h>

int main() {
    int size, i, *arr;

    // Get the size of the original array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Allocate memory for the original array
    arr = (int*) malloc(size * sizeof(int));

    // Read elements into the original array from the user
    for (i = 0; i < size; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    // Ask the user how many additional elements they want to add
    int num_add;
    printf("How many additional elements do you want to add? ");
    scanf("%d", &num_add);

    // Reallocate memory for the array to add more elements
    arr = (int*) realloc(arr, (size + num_add) * sizeof(int));

    // Read the additional elements from the user
    for (i = size; i < size + num_add; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    // Print the resulting array to the screen
    printf("The resulting array is: ");
    for (i = 0; i < size + num_add; i++) {
        printf("%d ", arr[i]);
    }

    // Free memory
    free(arr);

    return 0;
}

