#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    char chars[n];
    for (int i = 0; i < n; i++) {
        scanf(" %c", &chars[i]);
    }

    int total = 0;
    for (int i = 0; i < n; i++) {
        if (chars[i] == 'A' || chars[i] == 'E' || chars[i] == 'I' || chars[i] == 'O' || chars[i] == 'U') {
            total++;
        }
    }
    printf("%d", total);
    return 0;
}