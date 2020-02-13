//
// Created by Inori on 2020/2/13.
//
// 函数
/**
 * 要先在main函数里对调用的函数进行声明，然后再调用.如果出现在被调用之前可以不用声明。
 */

#include <stdio.h>
void main(){
    void printX();
    void helloWorld();
    void printN();
    void printT();
    int add(int a,int b);
    printX();
    printN();
    printT();helloWorld();
    printN();
    printX();
    printN();
    printN();
    printf("add result:%d",add(10,10));
}

void helloWorld(){
    printf("Hello World");
}

void printX(){
    printf("************************************");
}

void printN()
{
    printf("\n");
}

void printT()
{
    printf("\t");
}

int add(int a,int b)
{
    if(a<0){
        return a * (-1) + b;
    }else if(a < 100){
        return a * b;
    } else {
        return a + b;
    }
}