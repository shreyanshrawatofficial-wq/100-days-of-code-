#include <stdio.h>
int sum_of_even_numbers(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (2 * i); // Calculate the ith even number and add it to the sum
    }
    return sum;
}
int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1; // Exit the program with an error code
    }
    int result = sum_of_even_numbers(n);
    printf("The sum of the first %d even numbers is: %d\n", n, result);
    return 0;
}