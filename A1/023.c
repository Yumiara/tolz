#include <stdio.h>

int main() {
    int temp;
    char type;

    scanf("%d", &temp);
    scanf(" %c", &type);

    if (type == 'c' || type == 'C') {
        if (temp >= 100) {
            printf("gas");
        } else if (temp < 100 && temp > 0) {
            printf("liquid");
        } else {
            printf("solid");
        }
    } else if (type == 'f' || type == 'F') {
        if (temp >= 212) {
            printf("gas");
        } else if (temp < 212 && temp > 32) {
            printf("liquid");
        } else {
            printf("solid");
        }
    } else {
        printf("INVALID INPUT");
    }
}