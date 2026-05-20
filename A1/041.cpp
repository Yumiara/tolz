#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int g;
    cin >> g;

    for (int i=1; i<13; i++) {
        cout << g << " * " << i << " = " << g*i << endl;
    };

    return 0;
}