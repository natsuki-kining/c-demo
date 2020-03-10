//
// Created by Inori on 2020/3/10.
//
// 位段

#include <stdio.h>

void main()
{
    unsigned data = 12,a,b,c,d;

    data = data & 0177417;
    printf("data:%o,%d\n",data,data);
    data = data & ~(15<<4);
    printf("data:%o,%d\n",data,data);
    data = data & ~(15<<4) | (12 & 15) << 4;
    printf("data:%o,%d\n",data,data);


    struct packed_data{
        unsigned a:2;
        unsigned b:6;
        unsigned c:4;
        unsigned d:4;

        int i;
    } dataBitField;

    dataBitField.a = 2;
    dataBitField.b = 7;
    dataBitField.c = 9;

    printf("%d,%d,%d\n",dataBitField.a,dataBitField.b,dataBitField.c);
}
