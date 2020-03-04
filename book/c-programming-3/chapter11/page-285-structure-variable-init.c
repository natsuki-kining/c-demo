//
// Created by Inori on 2020/3/4.
//
// 结构体变量的初始化
#include <stdio.h>
void main()
{
    struct student
    {
        long int num;
        char name[20];
        char sex;
        char addr[20];
    }a={10101,"Li Min",'M',"Beijing"}; //对结构体变量a赋初值
    printf("No.:%ld\nname:%s\nsex:%c\naddress:%s",a.num,a.name,a.sex,a.addr);
}
