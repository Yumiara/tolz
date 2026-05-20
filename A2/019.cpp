#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.size();
    int maxU = 0;

    for (int i = 0; i < n; i++) {
        if (tolower(s[i]) == 'b') {
            int j = i + 1;
            int count = 0;

            while (j < n && tolower(s[j]) == 'u') {
                count++;
                j++;
            }

            if (count >= 2) {
                if (count > maxU) maxU = count;
            }
        }
    }

    if (maxU > 0) {
        cout << "Yes " << maxU;
        return 0;
    }

    int pos = -1;
    for (int i = 0; i < n; i++) {
        if (tolower(s[i]) == 'b') {
            pos = i;
            break;
        }
    }

    if (pos != -1) {
        for (int i = pos + 1; i < n; i++) {
            s[i] = 'U';
        }
        cout << s;
    } else {
        string base = "BUU";
        string ans = "";
        while (ans.size() < n) ans += base;
        cout << ans.substr(0, n);
    }
}