#include <stdio.h>
#include <stdbool.h>

int main() {
    int nums[11];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &nums[i]);
    }

    int result[11];
    int resultIndex = 0;

    for (int i = 0; i < 10; i++) {
        bool isDuplicate = false;
        for (int j = 0; j < resultIndex; j++) {
            if (nums[i] == result[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            result[resultIndex++] = nums[i];
        }
    }

    for (int i = 0; i < resultIndex; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}