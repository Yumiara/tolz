#include <stdio.h>

int main() {
    int N, M;

    scanf("%d %d", &N, &M);

    char baseArray[N + 2][M + 2];
    char compareArray[N + 2][M + 2];
    char resultArray[N + 2][M + 2];

    for (int i = 0; i < N; i++) {
        scanf("%s", baseArray[i]);
    }

    for (int i = 0; i < N; i++) {
        scanf("%s", compareArray[i]);
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (baseArray[i][j] == '-' && compareArray[i][j] == '-') {
                resultArray[i][j] = '-';
            } else if (baseArray[i][j] == '+' && compareArray[i][j] == '-') {
                resultArray[i][j] = '+';
            } else if (baseArray[i][j] == '-' && compareArray[i][j] == 'x') {
                resultArray[i][j] = 'x';
            } else if (baseArray[i][j] == '+' && compareArray[i][j] == 'x') {
                resultArray[i][j] = '*';
            }
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%c", resultArray[i][j]);
        }
        printf("\n");
    }


}