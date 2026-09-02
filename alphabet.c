#include <stdio.h>
void check_alphabet(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        printf("%c is an uppercase alphabet.\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("%c is a lowercase alphabet.\n", ch);
    } else if (ch >= '0' && ch <= '9') {
        printf("%c is a digit.\n", ch);
    } else {
        printf("%c is a special character.\n", ch);
    }
}
int main() {
    char character;
    printf("Enter a character: ");
    scanf(" %c", &character);
    check_alphabet(character);
    return 0;
}