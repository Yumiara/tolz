#include <stdio.h>

int main() {
    int amount;
    scanf("%d", &amount);

    int scores[amount + 1];
    for (int i = 0; i < amount; i++) {
        scanf("%d", &scores[i]);
    }

    int highest = scores[0];
    int top = 0;

    for (int i = 0; i < amount; i++) {
        if (scores[i] > highest) {
            highest = scores[i];
            top = 1;
        } else if (scores[i] == highest) {
            top++;
        }
    }

    printf("%d\n", highest);
    printf("%d", top);
}