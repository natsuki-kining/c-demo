//
// Created by Inori on 2020/3/4.
//
// 结构体数组
// 随机选举
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct person
{
    char name[20];
    int count;

} leader[3]={"Li",0,"Zhang",0,"Fun",0};

void main()
{
    char names[3][20]={
            {"Li"},{"Zhang"},{"Fun"}
    };
    for (int i = 0; i < 10; ++i) {
        int a = rand() % 10;
        for (int j = 0; j < 3; ++j) {
            if (strcmp(names[a % 3],leader[j].name)==0){
                leader[j].count++;
            }
        }
    }
    for (int j = 0; j < 3; ++j) {
        printf("name:%s\tcount:%d\n",leader[j].name,leader[j].count);
    }
}
