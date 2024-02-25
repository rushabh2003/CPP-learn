#include <stdio.h>
#include <ctype.h> // For isalpha() and isdigit()

int main() {
    char ch; // To hold each character input
    char alphabets[100], digits[100], specialChars[100], operators[100];
    int alphaIndex = 0, digitIndex = 0, specialIndex = 0, operatorIndex = 0;
    
    printf("Enter a statement: ");

    // Reading character by character until newline is encountered
    while(scanf("%c", &ch) && ch != '\n') {
        if (isalpha(ch)) {
            alphabets[alphaIndex++] = ch;
        } else if (isdigit(ch)) {
            digits[digitIndex++] = ch;
        } else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            operators[operatorIndex++] = ch;
        } else {
            specialChars[specialIndex++] = ch;
        }
    }
    
    // Null-terminating the strings
    alphabets[alphaIndex] = '\0';
    digits[digitIndex] = '\0';
    specialChars[specialIndex] = '\0';
    operators[operatorIndex] = '\0';

    printf("Alphabets: %s\n", alphabets);
    printf("Digits: %s\n", digits);
    printf("Special Characters: %s\n", specialChars);
    printf("Arithmetic Operators: %s\n", operators);

    return 0;
}
