//
// goto 语句构成循环
// Created by Inori on 2020/2/12.
//
/**
 * 用途：
 * 1、与if语句一起构成循环结构
 * 2、从循环体重跳转到循环体外（也可以使用break，continue)
 */

#include <stdio.h>
void main(){
    int i = 1,sum = 0;
    loop:if (i<=100){
        sum += i;
        i ++;
        goto loop;
    }
    printf("sum:%d\n\n",sum);

    i = 1,sum = 0;
    test:if (i<=1000){
    sum += i;
    i ++;
    goto test;
}
    printf("sum2:%d",sum);
}
