#include <stdio.h>
int strongNumber(int num) {
    int originalNum = num;
    int sum = 0;
    while (num != 0) {
        int digit = num % 10;
        int factorial = 1;
        for (int i = 1; i <= digit; i++) {
            factorial *= i;
        }
        sum += factorial;
        num /= 10;
    }
    return sum == originalNum;
}
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (strongNumber(number)) {
        printf("%d is a strong number.\n", number);
    } else {
        printf("%d is not a strong number.\n", number);
    }
    return 0;
}