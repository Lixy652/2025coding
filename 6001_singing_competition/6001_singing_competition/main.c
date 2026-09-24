#include <stdio.h>
typedef struct Singer {
    int score[20];
    int sum;
    double ave;
}Sin;
int main(void) {
    int n,m;
    double max_score = 0.00;
    scanf("%d %d",&n,&m);
    Sin sing[n];
    int max = -1, min = 11;
    for(int i=0;i<n;i++){
        sing[i].sum = 0;
        for(int j=0;j<m;j++) {
            scanf("%d", &sing[i].score[j]);
            sing[i].sum += sing[i].score[j];
            if(max < sing[i].score[j]) {
                max = sing[i].score[j];
            }
            if(min > sing[i].score[j]) {
                min = sing[i].score[j];
            }
            if(j == m-1) {
                sing[i].ave = (sing[i].sum  - max - min)/(m - 2.0);
                if(sing[i].ave > max_score) {
                    max_score = sing[i].ave;
                }
            }
        }
        max = -1;min = 11;
    }
    printf("%.2f\n",max_score);
    return 0;
}
