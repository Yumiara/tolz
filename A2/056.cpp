#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[10];
    int freq[101] = {0};

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }

    bool first = true;

    for (int i = 0; i <= 100; i++) {
        if (freq[i] == 1) {
            if (!first) cout << " ";
            cout << i;
            first = false;
        }
    }

    if (!first) cout << endl;
}