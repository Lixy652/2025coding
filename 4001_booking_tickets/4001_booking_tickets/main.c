#include <stdio.h>
#define ROW 20
#define COL 5
char line[COL] = {'A', 'B', 'C', 'D', 'F'};
void booking(int (*seats)[COL],int t) {
    for(int i=0;i<ROW;i++) {
        for(int j=0;j<=COL-t;j++) {
            int count = 0;
            for (int k=0;k<t;k++) {
                if (seats[i][j+k]==0) {
                    count++;
                }else {
                    break;
                }
            }
            if (count == t) {
                for (int k=0;k<t;k++) {
                    seats[i][j+k]=1;
                    printf("%d%c%s",i+1,line[j+k],(k==t-1) ? "" : " ");
                }
                printf("\n");
                return;
            }
        }
    }
    int find = 0;
    for(int i=0;i<ROW;i++) {
        for(int j=0;j<COL;j++) {
            if(seats[i][j]==0) {
                seats[i][j]=1;
                find++;
                if (find < t) {
                    printf("%d%c ",i+1,line[j]);
                }
                if (find == t) {
                    printf("%d%c",i+1,line[j]);
                }
            }
            if(find==t) {
                printf("\n");
                return;
            }
        }
    }
}
int main(void) {
    int times;
    scanf("%d", &times);
    int seats[ROW][COL] = {0};
    int tickets;
    for (int i = 0; i < times; i++) {
        scanf("%d", &tickets);
        booking(seats, tickets);
    }
    return 0;
}
