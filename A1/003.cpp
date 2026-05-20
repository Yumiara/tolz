#include <iostream>

using namespace std;

int main() {

    int high;
    int now;

    for (int i = 1; i <= 3; i++) {
        cin >> now;

        if (i == 1 || now > high) {
            high = now;
        }
    }

    cout << high << endl;

    return 0;
}