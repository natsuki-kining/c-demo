//
// Created by Inori on 2020/2/12.
//

// 赋值表达式 （不是赋值语句）
#include <stdio.h>
void main(){
    int i = 1;
    int j = 2;
    int a;
    if((a = j)>i){
        printf("a>i.\na:%d,i:%d",a,i);
    } else{
        printf("a<i.\na:%d,i:%d",a,i);
    }
}

