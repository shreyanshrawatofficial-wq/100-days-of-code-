#include <stdio.h>
int assign_grade(int percentage) {
    if (percentage >= 90 && percentage <= 100) {
        printf("Grade A\n");
    } else if (percentage >= 80 && percentage < 90) {
        printf("Grade B\n");
    } else if (percentage >= 70 && percentage < 80) {
        printf("Grade C\n");
    } else if (percentage >= 60 && percentage < 70) {
        printf("Grade D\n");
    } else if (percentage < 60 && percentage >= 0) {
        printf("Grade F\n");
    } else {
        printf("Invalid percentage. Please enter a value between 0 and 100.\n");
    }
    return 0;
}
int main() {
    int percentage;
    printf("Enter the percentage (0-100): ");
    scanf("%d", &percentage);
    assign_grade(percentage);
    return 0;
}