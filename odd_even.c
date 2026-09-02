#include <stdio.h>
int odd_even(int num) {
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        return printf("%d is odd.\n", num);
    }
    return 0;
}
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    
    odd_even(number);
    
    return 0;
}