#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, *arr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int*) calloc(n, sizeof(int));  // Dynamic allocation with initialization

    if (arr == NULL) {
        printf("Memory not allocated!\n");
        return 1;
    }

    printf("Default values in array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);  // Free memory
    return 0;
}
