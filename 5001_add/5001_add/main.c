#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void swap(char* a, char* b) {
    while (a<b) {
        char t;
        t = *a;
        *a = *b;
        *b = t;
        a++;
        b--;
    }
}
int main(void) {
    char str1[100];
    scanf("%s", str1);
    char str2[100];
    scanf("%s", str2);
    char str3[100];
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    char *p1 = str1,*q1 = str1 + len1 -1;
    char *p2 = str2,*q2 = str2 + len2 - 1;
    swap(p1, q1);
    swap(p2, q2);
    int min_len = len1 < len2 ? len1 : len2;
    int max_len = len1 > len2 ? len1 : len2;
    char* min_str = (len1 < len2) ? str1 : str2;
    char* max_str = (len1 > len2) ? str1 : str2;
    int i = 0, j = 0, k = 0, num = 0;
    for (i=0;i<min_len;i++) {
        int digit1 = str1[i] - '0';
        int digit2 = str2[i] - '0';
        int sum = digit1 + digit2 + num;
        str3[k++] = (char)(sum % 10 + '0');
        num = sum / 10;
    }
    for (j=min_len;j<max_len;j++) {
        int digit = max_str[j] - '0';
        int sum = digit + num;
        str3[k++] = (char)(sum % 10 + '0');
        num = sum / 10;
    }
    if (num==1) {
        str3[k++] = num + '0';
    }
    str3[k] = '\0';
    swap(str3, str3 + k - 1);
    puts(str3);
    return 0;
}
