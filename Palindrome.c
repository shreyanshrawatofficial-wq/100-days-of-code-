#include <stdio.h>
int is_palindrome(int num) {
    int original = num;
    int reversed = 0;

    while (num != 0) {
        int digit = num % 10; // Get the last digit
        reversed = reversed * 10 + digit; // Append the digit to the reversed number
        num /= 10; // Remove the last digit from the original number
    }

    return (original == reversed); // Check if original and reversed are the same
}
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (is_palindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }
    return 0;
}