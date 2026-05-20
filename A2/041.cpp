#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string toBase(int n, int base) {
    if (n == 0) return "0";
    string res = "";
    while (n > 0) {
        int digit = n % base;
        if (digit < 10)
            res += char('0' + digit);
        else
            res += char('A' + digit - 10);
        n /= base;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    int N;
    cin >> N;

    cout << toBase(N, 2) << endl;
    cout << toBase(N, 8) << endl;
    cout << toBase(N, 16) << endl;
}