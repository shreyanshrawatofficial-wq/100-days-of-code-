#include <stdio.h>
int sum(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
float divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0; // Return 0 or handle the error as needed
    }
    return (float)a / b;
}
int modulus(int a, int b) {
    if (b == 0) {
        printf("Error: Modulus by zero is not allowed.\n");
        return 0; // Return 0 or handle the error as needed
    }
    return a % b;
}
void button(int a, int b, int choice) {
    switch (choice) {
        case 1:
            printf("Result: %d\n", sum(a, b));
            break;
        case 2:
            printf("Result: %d\n", subtract(a, b));
            break;
        case 3:
            printf("Result: %d\n", multiply(a, b));
            break;
        case 4:
            printf("Result: %.2f\n", divide(a, b));
            break;
        case 5:
            printf("Result: %d\n", modulus(a, b));
            break;
        default:
            printf("Invalid choice. Please select a valid operation.\n");
    }
}
int main() {
    int choice, a, b;
    printf("Basic Calculator\n");
    printf("Select an operation:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Modulus (%%)\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    button(a, b, choice);
    return 0;
}