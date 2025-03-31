#include <stdio.h>

int main() {
    int arr[2][2] = { {1, 2}, {3, 4} }; // Declare a 2D array

    // Loop through rows
    for(int i = 0; i < 2; i++) {
        // Loop through columns
        for(int j = 0; j < 2; j++) {
            printf("%d ", arr[i][j]); // Print each element
        }
        printf("\n"); // New line after each row
    }

    return 0;
}