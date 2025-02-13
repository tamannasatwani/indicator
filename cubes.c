#include <stdio.h>

void findCubes(int *arr, int size) {
    int i, j;  // Declare loop variables at the beginning
    printf("Cubes of all elements:\n");
    
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            int value = *(arr + i * size + j);
            printf("%d ", value * value * value);
        }
        printf("\n");
    }
}

int main() {
    int size, i, j;  // Declare loop variables at the beginning

    printf("Enter array's size: ");
    scanf("%d", &size);

    int arr[size][size];

    printf("Enter array elements:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    findCubes((int *)arr, size);
    return 0;
}


