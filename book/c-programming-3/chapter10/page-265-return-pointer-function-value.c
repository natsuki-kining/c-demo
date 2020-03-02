//
// Created by Inori on 2020/3/2.
//
// 返回指针值的函数

#include <stdio.h>
void main()
{
    float score[][4] = {{60,70,80,90},{56,89,67,88},{34,78,90,66}};
    float * search(float(*pointer)[4],int n);

    float *p;
    int m = 1;
    p = search(score,m);
    printf("The scores of No.%d are:\n",m);
    for (int i = 0; i < 4; ++i) {
        printf("%5.2f\t",*(p+i));
    }
}

float * search(float(*pointer)[4],int n)
{
    return *(pointer+n);
}