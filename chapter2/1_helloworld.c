#include <stdio.h>
/*
# 代表预处理
include 包含头文件
stdio 标准输入输出
*/

int main(void){ //无参数用void

    int num; //声明整形函数   开辟内存空间
    num = 1; //赋值语句

    printf("Hello,World \n"); //printf 标准输出函数
    printf("I am simple ");
    printf("My favorit number is %d\n", num); //%d进行替换操作，%d代表十进制整型数
    return 0;
}