#include <stdio.h>
/*
fathoms convert to feet
*/
int main(void){ //无参数用void

    int feet, fathoms;
    fathoms = 2;
    feet = 6*fathoms;

    printf("There is %d feet in %d fathoms.\n",feet,fathoms); //printf 标准输出函数
    printf("Yes, I said %d feet!",6*fathoms);
    
    return 0;
}