
#include <stdio.h>

int main() {
    float num1, num2, sum;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    sum = num1 + num2;

    printf("Sum = %.2f\n", sum);

    return 0;
}