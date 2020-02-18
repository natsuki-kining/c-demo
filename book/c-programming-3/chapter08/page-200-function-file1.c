//
// Created by Inori on 2020/2/18.
//

#include <stdio.h>
void main()
{
    extern void enter_string(char str[]);
    extern void delete_string(char str[],char ch);
    extern void print_string(char str[]);
    // 以上三个函数声明在本函数中将要调用的在其他文件中定义的三个函数

    char c;
    char str[80];
    enter_string(str);
    scanf("%c",&c);
    delete_string(str,c);
    print_string(str);
}