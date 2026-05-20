#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[50];

    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
        cout << "Input number " << i + 1 << " stored." << endl;
    }

    int menu;
    cin >> menu;

    if (menu == 1) {
        cout << "Original order: ";
        for (int i = 0; i < 3; i++) {
            cout << arr[i];
            if (i < 2) cout << " ";
        }
    }

    else if (menu == 2) {
        int temp[3];
        for (int i = 0; i < 3; i++) temp[i] = arr[i];

        sort(temp, temp + 3, greater<int>());

        cout << "Descending order: ";
        for (int i = 0; i < 3; i++) {
            cout << temp[i];
            if (i < 2) cout << " ";
        }
    }

    else if (menu == 3) {
        int temp[3];
        for (int i = 0; i < 3; i++) temp[i] = arr[i];

        sort(temp, temp + 3);

        cout << "Ascending order: ";
        for (int i = 0; i < 3; i++) {
            cout << temp[i];
            if (i < 2) cout << " ";
        }
    }

    return 0;
}