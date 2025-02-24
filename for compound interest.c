//program to compute compound interest
/*
AUTHOR: Caren Kiptoo
REG NO: D33-2447-2023
*/
#include <stdio.h>
#include <math.h>

void calculate_compound_interest(float principal, float time, float rate, int n) {
    float amount = principal * pow((1 + rate / (100 * n)), n * time);
    float compound_interest = amount - principal;
    printf("Compound Interest: %.2f\n", compound_interest);
}

int main( ) {
    float principal, time, rate;
    int n;

    printf("Enter Principal Amount: ");
    scanf("%f", &principal);
    printf("Enter Time (in years): ");
    scanf("%f", &time);
    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);
    printf("Enter Number of Times Interest Compounded per Year: ");
    scanf("%d", &n);

    // Calculate and display result
    calculate_compound_interest(principal, time, rate, n);
    return 0;
}
