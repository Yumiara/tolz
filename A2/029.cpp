#include <iostream>
using namespace std;

int main() {
    int amount;
    cin >> amount;

    for (int i = 0; i < amount; i++) {
        for (int j = 0; j < i + 1; j++) {
            if (j == 0) {
                cout << "0 ";
            } else if (j == i) {
                cout << "0 ";
            } else if (i == amount - 1) {
                cout << "0 ";
            } else {
                cout << "1 ";
            }
        }
        cout << endl;
    }
}