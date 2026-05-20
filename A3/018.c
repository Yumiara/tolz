#include <stdio.h>

int main() {
    int l, n;
    scanf("%d %d", &l, &n);
    for (int i = 1; i <= l; i++) {
        int orange = i * i;
        if (n >= orange) {
            n -= orange;
        } else {
            printf("%d\n", l - i + 1);
            return 0;
        }
    }

    printf("%d", 0);
    return 0;
}