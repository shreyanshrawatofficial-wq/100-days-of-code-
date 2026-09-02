#include <stdio.h>
int factorial(int n) {
    if (n < 0) {
        return -1; // Factorial is not defined for negative numbers
    } else if (n == 0 || n == 1) {
        return 1; // Factorial of 0 and 1 is 1
    } else {
        return n * factorial(n - 1); // Recursive call
    }
}
int main() {
    int number;
    printf("Enter a non-negative integer: ");
    scanf("%d", &number);
    
    int result = factorial(number);
    
    if (result == -1) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %d\n", number, result);
    }
    
    return 0;
}