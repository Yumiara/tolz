#include <stdio.h>

int main() {
    int wide, long_i, floor;
    scanf("%d %d %d", &wide, &long_i, &floor);
    int price;
    scanf("%d", &price);
    int length = (wide + long_i) * 2 * floor;
    printf("%d\n", length);
    printf("%d", length * price);

}