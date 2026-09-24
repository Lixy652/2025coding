#include<stdio.h>

int main(){
    int result,num;
    char sign;
    //读取第一个数字
    scanf("%d",&result);
    while (1) {
        //读取数字后的运算符
         scanf("%c",&sign);
         if (sign=='=') {
             //如果读到等号，输出结果并退出
            printf("%d",result);
             break;
         }
         //判断运算符是否合法
         if (sign!='+' && sign!='-' && sign!='*' && sign!='/') {
             printf("错误的运算符:%c\n",sign);
             break;
         }
         //根据运算符类型更新result的值
         scanf("%d",&num);
         switch (sign) {
             case '+':result += num;
             break;
             case '-':result -= num;
             break;
             case '*':result *= num;
             break;
             case '/':result /= num;
             break;
         }
    }
    return 0;
    }


