//
// Created by Inori on 2020/2/17.
//
// 使用寄存器变量
/**
 * 如果有一些变量使用频繁（例如在一个函数中执行一万次的循环，每次循环中都要引用某局部变量），
 * 则为存取变量的值要花费很多时间，为提高执行效率，C语言运行将局部变量的值放在CPU里的寄存器中，
 * 需要用时直接从寄存器去除参加运算，不必再到内存中去存取。
 * 由于对寄存器的存取速度远高于对内存的存取速度，因此可以使用寄存器来提高执行效率。这种变量叫做寄存器变量，用关键字register声明。
 */
#include <stdio.h>
void main()
{
    long fac(long);
    long n;
    scanf("%ld",&n);
    for (int i = 1; i <= n; i++) {
        printf("%ld! = %ld\n",i,fac(i));
    }
}

long fac(long n)
{
    register long f = 1;
    for (int i = 1; i <= n; i++) {
        f = f * i;
    }

    return(f);
}