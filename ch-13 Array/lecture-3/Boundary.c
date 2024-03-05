#include <stdio.h>

main() {
    int rows, cols;
    printf("Enter the number of rows and columns of the 2D array: ");
    scanf("%d %d", &rows, &cols);

    int arr[100][100];

    printf("Enter the elements of the 2D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Boundary elements are: ");

    // Print and calculate sum of top row
    int sum = 0;
    for (int j = 0; j < cols; j++) {
        printf("%d ", arr[0][i]);
        sum += arr[0][i];
    }

    // Print and calculate sum of right column (excluding first element)
    for (int i = 1; i < rows; i++) {
        printf("%d ", arr[i][cols - 1]);
        sum += arr[i][cols - 1];
    }

    // Print and calculate sum of bottom row (excluding last element)
    for (int i = cols - 2; i >= 0; i--) {
        printf("%d ", arr[rows - 1][i]);
        sum += arr[rows - 1][i];
    }

    // Print and calculate sum of left column (excluding first and last elements)
    for (int i = rows - 2; i > 0; i--) {
        printf("%d ", arr[i][0]);
        sum += arr[i][0];
    }

    printf("\nSum of boundary elements: %d\n", sum);
 }
