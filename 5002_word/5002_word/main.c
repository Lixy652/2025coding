#include <stdio.h>
#include <string.h>
int main(void) {
    char word1[100];
    fgets(word1, 100, stdin);
    size_t len = strlen(word1);
    if (word1[len - 1] == '\n') {
        word1[len - 1] = '\0';
    }
    char* ptr = word1;
    for (int i = 0; i < len; i++) {
        if (ptr[i] < 65 || (ptr[i] > 90 && ptr[i] < 97) || ptr[i] > 122) {
            ptr[i] = ' ';
        }
        if (ptr[i] > 64 && ptr[i] < 91) {
            ptr[i] = ptr[i] + 32;
        }
    }
    char* word2[100];
    int count = 0,k = 0;
    word2[count] = strtok(word1, " ");
    while (word2[count] != NULL) {
        count++;
        word2[count] = strtok(NULL," ");
    }
    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            if (strcmp(word2[i], word2[j]) == 0) {
                k++;
            }
        }
    }
    printf("%d",count - k);
    return 0;
}
