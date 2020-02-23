//
// Created by Inori on 2020/2/23.
//
//指针应用
//输入两个数，按大小顺序输出
#include <stdio.h>
void main()
{
    int * p1,* p2,a,b;
    scanf("%d,%d",&a,&b);
    p1 = &a;
    p2 = &b;
    if (a<b)
    {
        p1 = &b;
        p2 = &a;
    }
    printf("a=%d,b=%d\n",a,b);
    printf("max=%d,min=%d\n",* p1,* p2);
}
