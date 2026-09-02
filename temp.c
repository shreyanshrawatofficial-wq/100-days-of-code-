#include <stdio.h>
int farenheit_to_celsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}
int celsius_to_farenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}
int main() {
    float temperature;
    char unit;
    printf("Enter the temperature followed by the unit (C for Celsius, F for Fahrenheit): ");
    scanf("%f %c", &temperature, &unit);
    if (unit == 'C' || unit == 'c') {
        printf("%.2f Celsius is %.2f Fahrenheit\n", temperature, celsius_to_farenheit(temperature));
    } else if (unit == 'F' || unit == 'f') {
        printf("%.2f Fahrenheit is %.2f Celsius\n", temperature, farenheit_to_celsius(temperature));
    } else {
        printf("Invalid unit. Please use 'C' for Celsius or 'F' for Fahrenheit.\n");
    }
    return 0;
}