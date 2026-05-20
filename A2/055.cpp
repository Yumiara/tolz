#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<double> temps(N);
    double sum = 0.0;
    int alert = 0;

    for (int i = 0; i < N; i++) {
        cin >> temps[i];
        sum += temps[i];
        if (temps[i] >= 37.0) alert++;
    }

    vector<double> sortedTemps = temps;
    sort(sortedTemps.begin(), sortedTemps.end());

    double avg = sum / N;
    double median;

    if (N % 2 == 1) {
        median = sortedTemps[N / 2];
    } else {
        median = (sortedTemps[N/2 - 1] + sortedTemps[N/2]) / 2.0;
    }

    double maxTemp = sortedTemps.back();
    double minTemp = sortedTemps.front();

    cout << fixed << setprecision(2);
    cout << "SUM=" << sum << endl;
    cout << "AVG=" << avg << endl;
    cout << "MEDIAN=" << median << endl;
    cout << "MAX=" << maxTemp << endl;
    cout << "MIN=" << minTemp << endl;
    cout << "ALERT=" << alert << endl;

    cout << "SORTED=";
    for (int i = 0; i < N; i++) {
        cout << sortedTemps[i];
        if (i < N-1) cout << " ";
    }
    cout << endl;

    return 0;
}