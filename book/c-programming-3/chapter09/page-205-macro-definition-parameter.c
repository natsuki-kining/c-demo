//
// Created by Inori on 2020/2/19.
//
//带参数的宏定义
//#define S(a,b) 字符串

#incude "stdio.h"
#define PI 3.1415926
#define S(r) PI * r * r
void main()
{
    float a = 3.6,area;
    area = S(a);
    printf("r=%f\narea=%f\n",a,area);
}
