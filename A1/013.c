#include <stdio.h>

int main() {
    char input_c;
    int input_i;

    scanf("%c", &input_c);
    scanf("%d", &input_i);

    if (input_c == 'H' && input_i == 4567) {
        printf("safe unlocked\n");
    } else if (input_c == 'H') {
        printf("safe locked - change digit\n");
    } else if (input_i == 4567) {
        printf("safe locked - change char\n");
    } else {
        printf("safe locked\n");
    }
}
