//
// Created by Inori on 2020/2/23.
//

// 通过指针变量访问整型变量
/**
 * &:取地址运算符
 * *：指针运算符（或称间接访问运算符），取其指向的内容
 */
#include <stdio.h>
void main()
{
    int a = 100,b=10;
    int * pointer_1,* pointer_2;//定义pointer_1位基类型的int的指针变量
    pointer_1 = &a;//把变量a的地址赋给pointer_1
    pointer_2 = &b;//把变量a的地址赋给pointer_2

    printf("%d,%d\n",a,b);
    printf("%d,%d\n",* pointer_1,* pointer_2);

}