#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 500

void toLowerCase(char str[]) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int countWords(char str[]) {
    int count = 0;
    for (int i = 0; str[i]; i++) {
        if ((i == 0 && isalpha(str[i])) ||
            (isalpha(str[i]) && !isalpha(str[i - 1]))) {
            count++;
        }
    }
    return count;
}

int commonWords(char a[], char b[]) {
    char w1[100][50], w2[100][50];
    int n1 = 0, n2 = 0, i = 0, j = 0;

    while (sscanf(a + i, "%49s", w1[n1]) == 1) {
        i += strlen(w1[n1]) + 1;
        n1++;
    }

    while (sscanf(b + j, "%49s", w2[n2]) == 1) {
        j += strlen(w2[n2]) + 1;
        n2++;
    }

    int common = 0;
    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (strcmp(w1[i], w2[j]) == 0) {
                common++;
                break;
            }
        }
    }
    return common;
}

int main() {
    char text1[MAX], text2[MAX];
    int words1, words2, common;
    float similarity;

    printf("Enter first text:\n");
    fgets(text1, MAX, stdin);

    printf("\nEnter second text:\n");
    fgets(text2, MAX, stdin);

    toLowerCase(text1);
    toLowerCase(text2);

    words1 = countWords(text1);
    words2 = countWords(text2);

    common = commonWords(text1, text2);

    similarity = (2.0 * common / (words1 + words2)) * 100;

    printf("\nWords in text 1: %d", words1);
    printf("\nWords in text 2: %d", words2);
    printf("\nCommon words: %d", common);
    printf("\nPlagiarism similarity: %.2f%%\n", similarity);

    if (similarity > 70)
        printf("High plagiarism risk\n");
    else if (similarity > 40)
        printf("Moderate plagiarism risk\n");
    else
        printf("Low plagiarism risk\n");

    return 0;
}
