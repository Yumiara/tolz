#include <stdio.h>
#include <string.h>

int main() {
    char name[10], surname[10];
    int age;

    scanf("%s", name);
    scanf("%s", surname);
    scanf("%d", &age);

    if (strlen(name) > 5 && strlen(surname) > 5) {
        printf("%c%c%c%d", name[0], name[1], surname[strlen(surname) - 1], age % 10);
    } else {
        printf("%c%d%c", name[0], age, surname[strlen(surname) - 1]);
    }
}