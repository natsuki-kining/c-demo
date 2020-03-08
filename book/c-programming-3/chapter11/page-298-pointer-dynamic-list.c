//
// Created by Inori on 2020/3/7.
//
// 用指针处理链表之 动态链表

#include <stdio.h>
#include <malloc.h>
#define  NULL 0
#define LEN sizeof(struct student)

struct student
{
    long num;
    float score;
    struct student * next;
};

int n;

struct student * creat(void)
{
    struct student * head;
    struct student * p1,*p2;
    n = 0;
    /**
     * malloc:
     * 开辟一个新单元
     * 作用是在内存的动态存储区中分配一个长度为size的连续空间。
     * 此函数的值是一个纸箱分配域起始地址的指针，类型为void
     * 如果此函数未能成功的执行，则返回空指针NULL
     */
    p1 = p2 = (struct student *) malloc(LEN);
    scanf("%ls,%f",&p1->num,&p2->score);
    head = NULL;
    while (p1->num!=0)
    {
        n = n + 1;
        if (n == 1)
        {
            head = p1;
        }else{
            p2 ->next = p1;
        }
        p2 = p1;
        p1 = (struct student *) malloc(LEN);
        scanf("%ld,%f",&p1->num,&p2->score);
    }
    p2 -> next = NULL;
    return (head);
}

void main()
{
    struct student a,b,c,* head,* p;
    a.num = 10101;
    a.score = 89.5;

    b.num = 10103;
    b.score = 90;

    c.num = 10107;
    c.score = 85;

    head = &a;
    a.next = &b;
    b.next = &c;
    c.next = NULL;

    p = head;

    do
    {
        printf("%ld%5.1f\n",p->num,p->score);

        p = p->next;
    }while(p != NULL);
}
