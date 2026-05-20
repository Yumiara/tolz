#include <stdio.h>

int main() {
    int length;
    scanf("%d",&length);
    char DNA1[length], DNA2[length];
    for (int i = 0; i < length; i++) {
        scanf(" %c",&DNA1[i]);
    }
    for (int i = 0; i < length; i++) {
        scanf(" %c",&DNA2[i]);
    }
    int changes;
    scanf("%d",&changes);
    int DNA[changes], geneIndex[changes];
    char character[changes];
    for (int i = 0; i < changes; i++) {
        scanf("%d %d %c", &DNA[i], &geneIndex[i], &character[i]);
    }

    for (int i = 0; i < changes; i++) {
        if (DNA[i] == 1) {
            DNA1[geneIndex[i]] = character[i];
        } else if (DNA[i] == 2) {
            DNA2[geneIndex[i]] = character[i];
        }
    }

    int correctDuo = 0;

    for (int i = 0; i < length; i++) {
        if (DNA1[i] == 'A' && DNA2[i] == 'T' || DNA1[i] == 'T' && DNA2[i] == 'A') {
            correctDuo++;
        } else if (DNA1[i] == 'C' && DNA2[i] == 'G' || DNA1[i] == 'G' && DNA2[i] == 'C') {
            correctDuo++;
        }
    }

    for (int i = 0; i < length; i++) {
        printf("%c ", DNA1[i]);
    }

    printf("\n");

    for (int i = 0; i < length; i++) {
        printf("%c ", DNA2[i]);
    }

    printf("\n");

    printf("%d", length - correctDuo);
}