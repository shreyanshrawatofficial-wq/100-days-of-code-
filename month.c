#include <stdio.h>
void displayMonthInfo(int month) {
    switch (month) {
        case 1:
            printf("January - 31 days\n");
            break;
        case 2:
            printf("February - 28 or 29 days\n");
            break;
        case 3:
            printf("March - 31 days\n");
            break;
        case 4:
            printf("April - 30 days\n");
            break;
        case 5:
            printf("May - 31 days\n");
            break;
        case 6:
            printf("June - 30 days\n");
            break;
        case 7:
            printf("July - 31 days\n");
            break;
        case 8:
            printf("August - 31 days\n");
            break;
        case 9:
            printf("September - 30 days\n");
            break;
        case 10:
            printf("October - 31 days\n");
            break;
        case 11:
            printf("November - 30 days\n");
            break;
        case 12:
            printf("December - 31 days\n");
            break;
        default:
            printf("Invalid month number. Please enter a number between 1 and 12.\n");
    }
}
int main() {
    int month;
    printf("Enter a month number (1-12) to display the corresponding month information: ");
    scanf("%d", &month);
    displayMonthInfo(month);
    return 0;
}