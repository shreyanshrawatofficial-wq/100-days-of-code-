#include <stdio.h>
int simple_interest(int principal, int rate, int time) {
    return (principal * rate * time) / 100;
}
int compound_interest(int principal, int rate, int time) {
    return principal * (1 + rate / 100.0) * time - principal;
}
int main() {
    int principal, rate, time;
    printf("Enter principal amount: ");
    scanf("%d", &principal);
    printf("Enter rate of interest: ");
    scanf("%d", &rate);
    printf("Enter time in years: ");
    scanf("%d", &time);
    int si = simple_interest(principal, rate, time);
    int ci = compound_interest(principal, rate, time);
    printf("Simple Interest: %d\n", si);
    printf("Compound Interest: %d\n", ci);
    return 0;
}