//
// Created by Inori on 2020/2/27.
//
//字符串指针
// 将字符串a复制到字符串b
#include <stdio.h>
void main()
{
    void method1(char a[],char b[]);
    void method2(char a[],char b[]);

    char a1[] = "this is method1 parameter",
         a2[] = "this is method2 parameter",
         b1[20],b2[20];

    method1(a1,b1);
    method2(a2,b2);
}

/**
 * 字符指针
 * @param a
 * @param b
 */
void method1(char a[],char b[])
{
    int i;
    for (i = 0; * (a+i) != '\0'; i++) {
        *(b+1) = * (a+i);
    }
    * (b+i) = '\0';
    printf("method1 a is:%s\n",a);
    printf("method1 b is:");
    for (i = 0; b[i]!='\0' ; i++) {
        printf("%c",b[i]);
    }
    printf("\n");
}

/**
 * 指针变量
 * @param a
 * @param b
 */
void method2(char a[],char b[])
{
    char *p1 = a,*p2 = b;
    for (; *p1!= '\0'; p1++,p2++) {
        *p2 = * p1;
    }
    * p2 = '\0';
    printf("method2 a is:%s\n",a);
    printf("method2 b is:");
    for (int j = 0; b[j]!='\0' ; j++) {
        printf("%c",b[j]);
    }
    printf("\n");
}