#include <ctype.h>
#include <stdio.h>

int main() {
    char word[6];
    scanf("%5s", word);
    char reverse_word[6];
    for (int i = 0; i < 5; i++) {
        reverse_word[i] = tolower(word[4 - i]);
    }
    reverse_word[5] = '\0';
    printf("%s", reverse_word);
}