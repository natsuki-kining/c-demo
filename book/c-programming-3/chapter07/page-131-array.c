//
// Created by Inori on 2020/2/13.
//
//数组

#include <stdio.h>
void main(){
    int array[10];
    for (int i = 0; i < 10; ++i) {
        array[i] = i;
    }
    for (int i = 9; i >= 0; i--) {
        printf("array[%d]:%d\t",i,array[i]);
        printf("&array[%d]:%d,&i:%d\n",i,&array[i],&i);
    }

    //一维数组初始化
    int a[10] = {0,1,2,3,4,5,6,7,8,9};
    int b[10];
    printf("\n");
    for (int j = 0; j < 10; j++) {
        printf("a[%d]:%d\tb[%d]:%d\n",j,a[j],j,b[j]);
    }

    //二维数组初始化
    int aa[10][10] = {{0,1,2,3,4,5,6,7,8,9},{0,9,8,7,6,5,4,3,2,1},{1,1,1,1,1,1,1,1,1}};
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("aa[%d][%d]:%d\n",i,j,aa[i][j]);
        }
    }
}
