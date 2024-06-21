#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 256

void reverseString(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

void toUpperCase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

int countVowels(const char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    char input[MAX_LENGTH];

    printf("Enter a string: ");
    fgets(input, MAX_LENGTH, stdin);

    // Remove the newline character if present
    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    printf("Original String: %s\n", input);

    reverseString(input);
    printf("Reversed String: %s\n", input);

    toUpperCase(input);
    printf("Uppercase String: %s\n", input);

    int vowelCount = countVowels(input);
    printf("Number of Vowels: %d\n", vowelCount);

    return 0;
}
