//
// Created by Inori on 2020/2/23.
//
//指针变量作为函数参数

#include <stdio.h>
void main()
{
    void swap(int * p1,int * p2);
    int * p1,* p2,a,b;
    scanf("%d,%d",&a,&b);
    p1 = &a;
    p2 = &b;
    if (a<b)
    {
        swap(p1,p2);
    }
    printf("a=%d,b=%d\n",a,b);
    printf("max=%d,min=%d\n",* p1,* p2);
}

void swap(int * p1,int * p2)//如果不是指针变量，则只是值传递，形参的值改变不能使实参的值随之改变。
{
    int temp = * p1;//如果写成* temp 就有问题了， * p1 就是a，是整形变量。而* temp是指针变量temp所指向的变量。
    * p1 = * p2;
    * p2 = temp;
}