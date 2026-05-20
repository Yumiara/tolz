#include <math.h>
#include <stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    int total = 0;
    for (int i = 0; i <= x; i++) {
        total = total + pow(i, 2);
    }

    printf("%d",total);
}