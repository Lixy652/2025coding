#include <stdio.h>
void move(int n,char a,char b) {
    printf("Move disk from %c to %c\n",a,b);
}
void hanoi(int n, char sou,char dest,char aux) {
    if(n==1){
        move(n,sou,dest);
    }else{
        hanoi(n-1,sou,aux,dest);//把n-1个盘子移到辅助柱上
        move(n,sou,dest);//把最大的盘子移到目标柱上
        hanoi(n-1,aux,dest,sou);//把n-1个盘子移到目标柱上
    }
}
int main(void) {
    int n;
    scanf("%d",&n);
    hanoi(n,'A','C','B' );
    return 0;
}
