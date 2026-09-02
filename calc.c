#include <stdio.h>
int sum(int a, int b) {
    return a + b;
}
int difference(int a, int b) {
    return a - b;
}
int product(int a, int b) {
    return a * b;
}
float quotient(int a, int b) {
    if (b != 0) {
        return (float)a / b;
    } else {
        printf("Error: Division by zero is not allowed.\n");
        return 0.0;
    }
}
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    printf("Sum: %d\n", sum(num1, num2));
    printf("Difference: %d\n", difference(num1, num2));
    printf("Product: %d\n", product(num1, num2));
    printf("Quotient: %.2f\n", quotient(num1, num2));
    
    return 0;
}