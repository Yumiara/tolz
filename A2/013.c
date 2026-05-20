#include <stdio.h>

int main() {
    char type;
    int amount;

    char teaType;
    int sweatLevel, teaAmount;

    int total = 0;

    scanf("%c %d ", &type, &amount);
    scanf("%c %d %d", &teaType, &sweatLevel, &teaAmount);

    switch (type) {
        case 'H':
            total += amount * 5;
            break;
        case 'O':
            total += amount * 3;
            break;
        case 'J':
            total += amount * 2;
            break;
        default: break;
    }
    switch (teaType) {
        case 'R':
            switch (sweatLevel) {
                case 1:
                    total += teaAmount * 12;
                    break;
                case 2:
                    total += teaAmount * 18;
                    break;
                case 3:
                    total += teaAmount * 25;
                    break;
            }
            break;
        case 'T':
            switch (sweatLevel) {
                case 1:
                    total += teaAmount * 15;
                    break;
                case 2:
                    total += teaAmount * 20;
                    break;
                case 3:
                    total += teaAmount * 30;
                    break;
            }
            break;
        case 'M':
            switch (sweatLevel) {
                case 1:
                    total += teaAmount * 10;
                    break;
                case 2:
                    total += teaAmount * 15;
                    break;
                case 3:
                    total += teaAmount * 20;
                    break;
            }
            break;
    }

    printf("%d", total);
}