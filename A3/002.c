#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int x = 1;
    while (x * x < n) {
        x++;
    }
    if (n == 1) {
        printf("0");
    } else {
        printf("%d", (2 * x - 3) + (n - x + 1) % 2);
    }
}