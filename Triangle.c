#include <stdio.h>
void classify_triangle(float a, float b, float c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Invalid triangle sides. All sides must be positive.\n");
        return;
    }
    if (a == b && b == c) {
        printf("The triangle is Equilateral.\n");
    } else if (a == b || b == c || a == c) {
        printf("The triangle is Isosceles.\n");
    } else {
        printf("The triangle is Scalene.\n");
    }
}
int main() {
    float side1, side2, side3;
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);
    classify_triangle(side1, side2, side3);
    return 0;
}