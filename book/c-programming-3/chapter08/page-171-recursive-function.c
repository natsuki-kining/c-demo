//
// Created by Inori on 2020/2/14.
//
// 递归 求 n！
#include <stdio.h>


void main()
{
    long fac(int num,int num2);
    int num;
    printf("input an integer number:");
    scanf("%d",&num);
    printf("%d! = ",num);
    long value = fac(num,num);
    printf("= %d",value);
}

long fac(int num,int num2){

    long f = 1;
    if(num>0)
    {
        f = fac(num-1,num2) * num;
        printf("%d ",num);
    }
    if (num != num2 && num != 0){

        printf("* ");
    }
    return (f);
}