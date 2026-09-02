#include <stdio.h>
int oddDigitProduct(int num) {
    int product = 1;
    int hasOddDigit = 0; // Flag to check if there is at least one odd digit
    while (num != 0) {
        int digit = num % 10;
        if (digit % 2 != 0) { // Check if the digit is odd
            product *= digit;
            hasOddDigit = 1; // Set flag to true
        }
        num /= 10;
    }
    return hasOddDigit ? product : 0; // Return product if there was an odd digit, otherwise return 0
}
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    int result = oddDigitProduct(number);
    if (result != 0) {
        printf("Product of odd digits of %d is: %d\n", number, result);
    } else {
        printf("There are no odd digits in %d.\n", number);
    }
    return 0;
}