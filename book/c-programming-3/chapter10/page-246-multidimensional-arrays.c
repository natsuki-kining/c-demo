//
// Created by Inori on 2020/2/26.
//
// 多维数组与指针变量


#include <stdio.h>
void main(){
    int a[3][4] = {1,3,5,7,9,11,13,15,17,19,21,23};
    int *p;
    for (p = a[0]; p < a[0] + 12; p ++) {
        if((p-a[0])%4 == 0)
        {
            printf("\n");
        }
        printf("%4d",*p);

    }
}
