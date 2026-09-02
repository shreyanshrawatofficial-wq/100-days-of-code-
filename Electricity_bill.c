#include<stdio.h>
void calculateElectricityBill(int units) {
    float billAmount = 0;

    if (units <= 100) {
        billAmount = units * 5;
    } else if (units <= 200) {
        billAmount = (100 * 5) + ((units - 100) * 7);
    } else if (units <= 300) {
        billAmount = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    } else {
        billAmount = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 12);
    }

    printf("The electricity bill for %d units is: ₹%.2f\n", units, billAmount);
}
int main() {
    int units;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);
    calculateElectricityBill(units);
    return 0;
}