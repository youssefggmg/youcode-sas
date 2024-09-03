#include <stdio.h>

int main() {
    char x;
    printf("Enter a character: ");
    scanf("%c", &x);
    if (x == 'a' || x == 'o' || x == 'e' || x == 'u' || x == 'i' || 
        x == 'A' || x == 'O' || x == 'E' || x == 'U' || x == 'I') {
        printf("%c is a vowel.\n", x);
    } else {
        printf("%c is a consonant.\n", x);
    }
    return 0;
}
