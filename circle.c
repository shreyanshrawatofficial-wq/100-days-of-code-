#include <stdio.h>
int area(int radius) {
    return 3.14 * radius * radius;
}
int circumference(int radius) {
    return 2 * 3.14 * radius;
}
int main() {
    int radius;
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    printf("Area: %.2f\n", area(radius));
    printf("Circumference: %.2f\n", circumference(radius));
    return 0;
}