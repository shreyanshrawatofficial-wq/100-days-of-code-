#include <stdio.h>
//series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
void sumOfSeries(int n) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        int numerator = 2 * (i + 1); // even numbers: 2, 4, 6, ...
        int denominator = 3 * (i + 1) + (i); // sequence: 3, 7, 11, ...
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