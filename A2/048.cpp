#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    int scores[10] = {0};

    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    cout << "Student:";
    for (int i = 0; i < n; i++) {
        cout << " Student" << i + 1;
    }
    cout << endl;

    if (n == 0) {
        cout << "Highest score: 0" << endl;
        cout << "Lowest score: 0" << endl;
        cout << fixed << setprecision(1);
        cout << "Average score: 0.0" << endl;
        cout << "Students who scored above average:" << endl;
        return 0;
    }

    int maxScore = scores[0], minScore = scores[0];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (scores[i] > maxScore) maxScore = scores[i];
        if (scores[i] < minScore) minScore = scores[i];
        sum += scores[i];
    }
    double avg = double(sum) / n;

    cout << "Highest score: " << maxScore << endl;
    cout << "Lowest score: " << minScore << endl;
    cout << fixed << setprecision(1);
    cout << "Average score: " << avg << endl;

    cout << "Students who scored above average:" << endl;
    for (int i = 0; i < n; i++) {
        if (scores[i] > avg) {
            cout << "Student " << i + 1 << endl;
        }
    }

    return 0;
}