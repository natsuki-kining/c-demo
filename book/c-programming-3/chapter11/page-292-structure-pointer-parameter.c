//
// Created by Inori on 2020/3/4.
//
// 用结构体变量和指向结构体的指针作函数参数

#include <stdio.h>
#include <string.h>
#define FORMAT "%d\n%s\n%f\n%f\n%f\n"
struct student
{
    long num;
    char name[20];
    float score[3];
};
void main()
{
    void print(struct student);
    struct student stu;
    stu.num = 123456;
    strcpy(stu.name,"Li Li");
    stu.score[0] = 68.5;
    stu.score[1] = 89;
    stu.score[2] = 78.7;
    print(stu);

}


void print(struct student stu)
{
    printf(FORMAT,stu.num,stu.num,stu.score[0],stu.score[1],stu.score[2]);
    printf("\n");

}