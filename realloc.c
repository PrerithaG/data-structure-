#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, *ptr;

    printf("Enter initial size: ");
    scanf("%d", &n);

    ptr = (int*) malloc(n * sizeof(int));

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &ptr[i]);

    printf("Enter new size: ");
    scanf("%d", &n);

    ptr = (int*) realloc(ptr, n * sizeof(int));  // Resize memory block

    printf("Enter %d elements (for new array):\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &ptr[i]);

    printf("Final array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", ptr[i]);

    free(ptr);  // Free memory
    return 0;
}



