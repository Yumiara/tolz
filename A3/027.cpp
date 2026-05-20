#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<char>> Matrix(N, vector<char>(M));
    vector<vector<char>> ResultMatrix(N, vector<char>(M));

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> Matrix[i][j];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (i == 0)
                ResultMatrix[i][j] = Matrix[i][j];
            else if (Matrix[i][j] == '-' && Matrix[i - 1][j] == '*')
                ResultMatrix[i][j] = '*';
            else
                ResultMatrix[i][j] = Matrix[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++)
            cout << ResultMatrix[i][j] << " ";
        cout << endl;
    }
}