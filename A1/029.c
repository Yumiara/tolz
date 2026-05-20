#include <stdio.h>

int main() {
    char input[10];
    scanf("%s", input);
    int count = 0;
    for (int i = 0; i < 3; i++) {
        if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u') {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}