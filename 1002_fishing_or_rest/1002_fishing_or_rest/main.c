#include<stdio.h>

int main(){
    int year, month, day;
    int m1[] = {31,29,31,30,31,30,31,31,30,31,30,31};
    int m2[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int rest_days = 0;
    scanf("%4d-%2d-%2d", &year, &month, &day);

    if ((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0)) {
        if (year < 1990 || month < 1 || month > 12 || day < 1 || day > m1[month-1]) {
            printf("Invalid input\n");
            return 0;
        }
    } else {
        if (year < 1990 || month < 1 || month > 12 || day < 1 || day > m2[month-1]) {
            printf("Invalid input\n");
            return 0;
        }
    }

    if ((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0)) {
        for (int i = 1; i < month; i++) {
            rest_days += m1[i-1];
        }
        rest_days += day;
    } else {
        for (int i = 1; i < month; i++) {
            rest_days += m2[i-1];
        }
        rest_days += day;
    }

    int d = 0;
    for (int i = 1990; i < year; i++) {
        if ((i % 400 == 0) || (i % 100 != 0 && i % 4 == 0)) {
            d += 366;
        } else {
            d += 365;
        }
    }

    int total_days = 0;
    total_days = d + rest_days;
    int remaining_days;
    remaining_days = total_days % 5;
    if (remaining_days == 1 || remaining_days == 2 || remaining_days == 3) {
        printf("working\n");
    } else {
        printf("rest\n");
    }
        return 0;
}
