#include <stdio.h>
void display_day_of_week(int day) {
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input. Please enter a number between 1 and 7.\n");
    }
}
int main() {
    int day;
    printf("Enter a number (1-7) to display the corresponding day of the week: ");
    scanf("%d", &day);
    display_day_of_week(day);
    return 0;
}