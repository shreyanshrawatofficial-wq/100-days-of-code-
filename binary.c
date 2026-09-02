#include <stdio.h>
int binary_representation(int n) {
    if (n == 0) {
        printf("0");
        return 0;
    }
    
    int binary[32]; // Array to store binary digits
    int index = 0;
    
    while (n > 0) {
        binary[index] = n % 2; // Store the remainder (binary digit)
        n = n / 2; // Update n to the quotient
        index++;
    }
    
    // Print the binary representation in reverse order
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    
    return 0;
}
int main() {
    int number;
    printf("Enter a non-negative integer: ");
    scanf("%d", &number);
    printf("The binary representation of %d is: ", number);
    binary_representation(number);
    printf("\n");
    return 0;
}