#include <stdio.h>
int parameter(int length, int width) {
    return 2 * (length + width);
}
int area(int length, int width) {
    return length * width;
}
int main() {
    int length, width;
    printf("Enter the length and width of the rectangle: ");
    scanf("%d %d", &length, &width);
    printf("Perimeter: %d\n", parameter(length, width));
    printf("Area: %d\n", area(length, width));
    return 0;
}