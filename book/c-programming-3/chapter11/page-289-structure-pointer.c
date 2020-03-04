//
// Created by Inori on 2020/3/4.
//
// 指向结构体类型数据的指针

#include <stdio.h>
#include <string.h>

void main()
{
    struct student
    {
        long num;
        char name[20];
        char sex;
        float score;
    };

    struct student stu_1;
    struct student *p;
    p = &stu_1;
    stu_1.num = 5699997;
    strcpy(stu_1.name,"Li");
    stu_1.sex = 'M';
    stu_1.score = 99;
    printf("stu_1: No.%ld\tname:%s\tsex:%c\tscore:%f\n",stu_1.num,stu_1.name,stu_1.sex,stu_1.score);
    printf("*p: No.%ld\tname:%s\tsex:%c\tscore:%f\n",(*p).num,(*p).name,(*p).sex,(*p).score);
}
