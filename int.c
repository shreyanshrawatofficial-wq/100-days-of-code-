#include <stdio.h>
int check(int number) {
    if (number < 0) {
        printf("Negative number\n");
        return -1;
    } else if (number == 0) {
        printf("Zero\n");
        return 0;
    } else {
        printf("Positive number\n");
        return 1;
    }
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    check(num);
    return 0;
}