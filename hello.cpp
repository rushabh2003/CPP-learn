#include <stdio.h>

int main() {
    char input[100]; // Assuming the statement won't exceed 99 characters + null terminator
    int i = 0;

    printf("Enter a statement (no spaces): ");
    scanf("%99s", input); // Read the input statement

    printf("Variables: ");
    for (i = 0; input[i] != '\0'; i++) {
        if ((input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z')) { // Check if it's a letter
            printf("%c", input[i]);
        }
    }

    printf("\nOperations: ");
    for (i = 0; input[i] != '\0'; i++) {
        if (input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/') { // Check if it's an arithmetic operator
            printf("%c ", input[i]); // Print the operation with a space for readability
        }
    }

    return 0;
}
