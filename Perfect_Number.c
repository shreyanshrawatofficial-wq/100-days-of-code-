#include <stdio.h>
void perfectNumber(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    if (sum == num) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }
}
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    perfectNumber(number);
    return 0;
}