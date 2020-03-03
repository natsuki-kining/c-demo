//
// Created by Inori on 2020/3/4.
//
// 指针数组
#include <stdio.h>
void main()
{
    int a[5]={1,3,5,7,9};
    int *num[5]={&a[0],&a[1],&a[2],&a[3],&a[4]};
    int **p = num;
    for (int i = 0; i < 5; ++i) {
        printf("%d",**p);
        p++;
    }
}
