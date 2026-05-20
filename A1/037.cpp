#include <stdio.h>

int main() {
    char romanNum[10][100] = {
        "Error : Out of range",
        "I", // 1
        "II", // 2
        "III", // 3
        "IV", // 4
        "V", // 5
        "VI", // 6
        "VII", // 7
        "VIII", // 8
        "IX", // 9
    };

    int input;

    scanf("%d",&input);

    if (input < 0) {
        printf("Error : Please input positive number");
        return 0;
    }
    if (input > 0 && input < 10) {
        printf("%s", romanNum[input]);
        return 0;
    }
    printf("%s", romanNum[0]);
    return 0;
}