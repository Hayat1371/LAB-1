#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, average;

    // Ask user for number of elements
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. The number of integers must be positive.\n");
        return 1;
    }

    int arr[n];  // Variable length array (C99 or later)

    // Read integers from user
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Calculate average
    average = sum / n;

    // Print result
    printf("The average is: %.2f\n", average);

    return 0;
}
