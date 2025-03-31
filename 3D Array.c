#include <stdio.h>

int main() {
    int arr[2][2][2] = { 
        { {1, 2}, {3, 4} }, 
        { {5, 6}, {7, 8} } 
    }; // Declare and initialize a 3D array

    printf("%d", arr[1][1][0]); // Access element at block 1, row 1, column 0 (7)

    return 0;
}