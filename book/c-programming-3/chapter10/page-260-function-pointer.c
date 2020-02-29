//
// Created by Inori on 2020/2/29.
//
// 函数指针

#include <stdio.h>
void main()
{
    int max(int,int);
    int a = 1,b = 2,c;
    c = max(a,b);
    printf("a=%d,b=%d,max=%d\n\n",a,b,c);

    //function  pointer
    a = 6,b = 5;
    int (*p)(int ,int);
    p = max;
    c = (*p)(a,b);
    printf("a=%d,b=%d,max=%d\n\n",a,b,c);
}

int max(int x,int y)
{
    int z;
    if (x>y)
    {
        z = x;
    } else{
        z = y;
    }
    return (z);
}

