#include<stdio.h>

void answer(void);//函数声明，如果不声明将有warning

/**
void answer(void){ //函数实现，可以放在开头
    printf("Dad i am watching tv, what's up?\n");
}
 * /

int main(void)
{
    printf("Rick, what are you doing!\n"); // Das said 

    answer(); // son answer 函数调用

    printf("OK! Come here i need you help;\n"); // Das said

    return 0;
}

void answer(void){ //函数实现
    printf("Dad i am watching tv, what's up?\n");
}
