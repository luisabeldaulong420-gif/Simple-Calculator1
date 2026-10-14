#include <stdio.h>

int main() {
    int number, a, b, sum, difference, quotient, product;

    printf("Enter 1st Number: ");
    scanf("%d", &a);

    printf("Enter 2nd Number: ");
    scanf("%d", &b);

    sum = a + b;
    difference = a - b;
    quotient = a % b;
    product = a * b;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Quotient: %d\n", quotient);
    printf("Product: %d\n", product);

    return 0;
}