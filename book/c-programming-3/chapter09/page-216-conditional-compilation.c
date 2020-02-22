//
// Created by Inori on 2020/2/22.
//
// 条件编译
// 满足某条件时对某一组语句进行编译，不满足编译另一组
#include <stdio.h>
#define LETTER 1

void main(){
    char str[20] = "C Language",c;
    int i = 0;
    while(c=str[i]!='\0'){
        printf("while:%c\t",c);
        i ++;
        #if LETTER
            if (c >= 'a' && c <= 'z'){
                c = c - 32;
            }
        #else
            if (c >= 'A' && c <= 'Z'){
                c = c + 32;
            }
        #endif
        printf("c:%c\n",c);
    }


}
