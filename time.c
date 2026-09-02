#include <stdio.h>
int seconds_to_format(int seconds) {
    int hours = seconds / 3600;
    int minutes = (seconds % 3600) / 60;
    int remaining_seconds = seconds % 60;
    printf("%02d:%02d:%02d\n", hours, minutes, remaining_seconds);
    return 0;
}
int main() {
    int total_seconds;
    printf("Enter total seconds: ");
    scanf("%d", &total_seconds);
    seconds_to_format(total_seconds);
    return 0;
}