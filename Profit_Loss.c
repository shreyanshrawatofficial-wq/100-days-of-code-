#include <stdio.h>
void calculate_profit_loss(float cost_price, float selling_price) {
    if (selling_price > cost_price) {
        float profit = selling_price - cost_price;
        float profit_percentage = (profit / cost_price) * 100;
        printf("Profit: %.2f\n", profit);
        printf("Profit Percentage: %.2f%%\n", profit_percentage);
    } else if (cost_price > selling_price) {
        float loss = cost_price - selling_price;
        float loss_percentage = (loss / cost_price) * 100;
        printf("Loss: %.2f\n", loss);
        printf("Loss Percentage: %.2f%%\n", loss_percentage);
    } else {
        printf("No profit, no loss.\n");
    }
}
int main() {
    float cost_price, selling_price;
    printf("Enter the cost price: ");
    scanf("%f", &cost_price);
    printf("Enter the selling price: ");
    scanf("%f", &selling_price);
    calculate_profit_loss(cost_price, selling_price);
    return 0;
}