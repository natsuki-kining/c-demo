//
// Created by Inori on 2020/2/19.
//
//宏定义

#include <stdio.h>
#define PI 3.1415926
void main()
{
    float l,s,r,v;
    printf("input radius:");
    scanf("%f",&r);

    l = 2.0 * PI * r;
    s = PI * r * r;
    v = 4.0 / 3 * PI * r * r * r;
    printf("l=%10.4f\ns=%10.4f\nv=%10.4f",l,s,v);
}
