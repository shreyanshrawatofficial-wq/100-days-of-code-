#include <stdio.h>
int sum_n_natural(int n) {
    if (n <= 0) {
        return 0;
    }
    return n + sum_n_natural(n - 1);
}
int main() {
    int n;
    printf("Enter a integer: ");
    scanf("%d", &n);
    int sum = sum_n_natural(n);
    printf("Sum of first %d natural numbers is: %d\n", n, sum);
    return 0;
}