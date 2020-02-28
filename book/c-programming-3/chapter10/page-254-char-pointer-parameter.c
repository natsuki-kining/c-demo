//
// Created by Inori on 2020/2/28.
//
// 字符指针作函数参数
// 复制字符串

#include <stdio.h>
void main()
{
    void copy_string1();
    void copy_string2();
    void copy_string3();

    copy_string1();
    copy_string2();
    copy_string3();
}

void copy_string1()
{
    printf("=====================>>copy_string1\n");
    char from[] = "Hello world";
    char to[] = "Hi C";

    printf("string from=%s\nstring to=%s\n",from,to);

    int i = 0;
    while(from[i]!='\0')
    {
        to[i]=from[i];
        i++;
    }
    to[i]='\0';
    printf("string from=%s\nstring to=%s\n",from,to);
}


void copy_string2()
{
    void copy_string2_pointer(char from[],char to[]);
    printf("\n=====================>>copy_string2\n");
    char from[] = "Hello world";
    char to[] = "Hi C";

    char *a = from,*b = to;
    printf("string a=%s\nstring b=%s\n",a,b);

    copy_string2_pointer(a,b);

    printf("string a=%s\nstring b=%s\n",a,b);
}

void copy_string2_pointer(char from[],char to[])
{
    int i = 0;
    while(from[i]!='\0')
    {
        to[i]=from[i];
        i++;
    }
    to[i]='\0';
}


void copy_string3()
{
    void copy_string3_pointer(char from[],char to[]);
    printf("\n=====================>>copy_string3\n");
    char from[] = "Hello world";
    char to[] = "Hi C";

    char *a = from,*b = to;
    printf("string a=%s\nstring b=%s\n",a,b);

    copy_string3_pointer(a,b);

    printf("string a=%s\nstring b=%s\n",a,b);
}


void copy_string3_pointer(char * from,char *to)
{
    for(;*from !='\0';from++,to++)
    {
        *to = * from;
    }
    * to = '\0';
}
