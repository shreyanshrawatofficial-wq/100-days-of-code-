#include <stdio.h>
void printLCM(int a, int b) {
    int lcm = (a > b) ? a : b; // Start with the greater number
    while (1) {
        if (lcm % a == 0 && lcm % b == 0) {
            printf("LCM of %d and %d is %d\n", a, b, lcm);
            break;
        }
        lcm++;
    }
}
int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    printLCM(num1, num2);
    return 0;
}