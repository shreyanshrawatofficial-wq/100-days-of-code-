#include<stdio.h>
int is_armstrong(int num) {
    int original = num;
    int sum = 0;
    int digits = 0;

    // Count the number of digits
    int temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    // Calculate the sum of the cubes of each digit
    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }

    return (original == sum);
}
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (is_armstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }
    return 0;
}