//
// Created by Inori on 2020/2/16.
//
//静态变量

// 求n！

#include <stdio.h>
void main()
{
    int fac(int n);
    int num;
    printf("input an integer number:");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++) {
        printf("%d!=%d\n",i,fac(i));
    }
}

int fac(int n)
{
    static int f = 1;
    f = f * n;
    return (f);
}
