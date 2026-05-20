#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int freq[100000 + 1] = {0};
    int left = 0, distinct = 0;
    long long less_Than_K = 0;

    for (int right = 0; right < n; right++) {
        if (freq[arr[right]] == 0) distinct++;
        freq[arr[right]]++;

        while (distinct >= k) {
            freq[arr[left]]--;
            if (freq[arr[left]] == 0) distinct--;
            left++;
        }

        less_Than_K += right - left + 1;
    }

    long long total = (long long)n * (n + 1) / 2;
    printf("%lld\n", total - less_Than_K);

    return 0;
}