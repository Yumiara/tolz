#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int total = 1;
    for (int i = n; i > 0; i--) {
        total = total * i;
    }
    printf("%d\n", total);
}