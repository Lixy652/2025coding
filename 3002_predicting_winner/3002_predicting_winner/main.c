#include <stdio.h>
int arr[100];
int maxDiff(int left,int right) {
    if (left == right) {
        return arr[left];
    }
    int chooseLeft = arr[left] - maxDiff(left+1,right);
    int chooseRight = arr[right] - maxDiff(left,right-1);
    return chooseLeft > chooseRight ? chooseLeft : chooseRight;
}
int main(void) {
    int n;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int result = maxDiff(0,n-1);
    if (result < 0) {
        printf("false\n");
    }else{
        printf("true\n");
    }
    return 0;
}
