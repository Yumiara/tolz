#include <iostream>

using namespace std;

int main() {

    string a;
    cin >> a;

    if (a != "a" && a != "e" && a != "i" && a != "o" && a != "u") {
		cout << "no";
	} else {
		cout << "yes";
	}

    return 0;
}