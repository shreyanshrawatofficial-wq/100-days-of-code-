#include <stdio.h>
void check_vowel(char ch) {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a vowel.\n", ch);
    } else {
        printf("%c is not a vowel.\n", ch);
    }
}
int main() {
    char character;
    printf("Enter a character: ");
    scanf(" %c", &character);
    check_vowel(character);
    return 0;
}