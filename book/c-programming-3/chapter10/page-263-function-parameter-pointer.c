//
// Created by Inori on 2020/3/1.
//
// 用指向函数的指针作函数参数

#include <stdio.h>
void main()
{
    int max(int,int);
    int min(int,int);
    int add(int,int);

    void process(int,int,int(*fun)(int,int));
    int a = 5,b = 6;
    printf("max=");
    process(a,b,max);
    printf("\n");
    printf("min=");
    process(a,b,min);
    printf("\n");
    printf("sum=");
    process(a,b,add);
}

int max(int x,int y)
{
    if(x>y){
        return x;
    } else{
        return y;
    }
}

int min(int x,int y)
{
    if(x>y){
        return y;
    } else{
        return x;
    }
}

int add(int x,int y)
{
    return (x+y);
}

void process(int x,int y,int(*fun)(int,int))
{
    int result = (*fun)(x,y);
    printf("%d",result);
}