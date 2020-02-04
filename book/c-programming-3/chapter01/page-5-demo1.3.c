//
// Created by Inori on 2020/2/4.
//
//求两个数中的最大者
#include <stdio.h>
void main(){
    int max(int num1,int num2);
    int a,b,c;
    printf("请输入数字：");
    scanf("%d,%d",&a,&b);
    c = max(a,b);
    printf("max=%d",c);
}

int max(int num1,int num2){
    if(num1>num2){
        return num1;
    }
    return num2;
}