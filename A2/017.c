#include <stdio.h>

int main() {
    char size, type;

    scanf(" %c %c", &size, &type);

    char topping;
    int amount = 0, total = 0;
    scanf(" %c", &topping);
    if (topping != 'N') {
        scanf("%d", &amount);
    }

    switch (type) {
        case 'R':
            switch (size) {
                case 'S':
                    total += 60;
                    break;
                case 'M':
                    total += 80;
                    break;
                case 'L':
                    total += 100;
                    break;
            }
            break;
        case 'T':
            switch (size) {
            case 'S':
                    total += 80;
                    break;
            case 'M':
                    total += 100;
                    break;
            case 'L':
                    total += 120;
                    break;
            }
            break;
    }

    switch (topping) {
        case 'P':
            total += amount * 15;
            break;
        case 'E':
            total += amount * 10;
            break;
        case 'N':
            break;
    }

    printf("%d", total);
}