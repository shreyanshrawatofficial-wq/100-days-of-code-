#include <stdio.h>
void print_numbers(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
}
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive integer greater than zero.\n");
        return 1; // Exit the program with an error code
    }
    print_numbers(n);
    return 0;
}