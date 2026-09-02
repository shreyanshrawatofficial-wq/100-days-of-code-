#include <stdio.h>
//series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
void sumOfSeries(int n) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        int numerator = 2 * i + 1; // odd numbers: 1, 3, 5, ...
        int denominator = 2 * i + 2; // even numbers: 2, 4, 6, ...
        sum += (double)numerator / denominator;
    }
    printf("Sum of the series up to %d terms is: %.4f\n", n, sum);
}
int main() {
    int terms;
    printf("Enter the number of terms: ");
    scanf("%d", &terms);
    sumOfSeries(terms);
    return 0;
}
