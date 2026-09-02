#include <stdio.h>
void calculateLibraryFine(int lateDays) {
    int fine = 0;

    if (lateDays <= 5) {
        fine = lateDays * 2;
    } else if (lateDays <= 10) {
        fine = (5 * 2) + ((lateDays - 5) * 4);
    } else if (lateDays <= 30) {
        fine = (5 * 2) + (5 * 4) + ((lateDays - 10) * 6);
    } else {
        printf("Membership Cancelled.\n");
        return;
    }

    printf("The library fine for %d late days is: ₹%d\n", lateDays, fine);
}
int main() {
    int lateDays;
    printf("Enter the number of late days: "); 
    scanf("%d", &lateDays);
    calculateLibraryFine(lateDays);
    return 0;
}