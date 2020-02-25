//
// Created by Inori on 2020/2/24.
//
//数组与指针
//将数组中的数倒序存放

#include <stdio.h>
void main()
{
    void method1(int x[],int n);
    void method2(int *x,int n);

    int a[10] = {3,7,9,11,0,2,3,5,71,82};
    int a2[10] = {3,7,9,11,0,2,3,5,71,82};

    printf("The original array:");
    for (int i = 0; i < 10; i++) {
        printf("%d ",a[i]);
    }
    printf("\n");

    method1(a,10);
    printf("invoke method1:");
    for (int i = 0; i < 10; i++) {
        printf("%d ",a[i]);
    }
    printf("\n");

    method2(a2,10);
    printf("invoke method2:");
    for (int i = 0; i < 10; i++) {
        printf("%d ",a[i]);
    }
    printf("\n");
}

void method1(int x[],int n)
{
    int * p,temp,*i,* j,m=(n-1)/2;
    i = x;
    j = x + n - 1;
    p = x + m;
    for (; i <= p; i++,j--) {
        temp = *i;
        *i = *j;
        *j = temp;
    }
}


void method2(int *x,int n)
{
    int temp,j,m=(n-1)/2;
    for (int i = 0; i <= m; i++) {
        j = n - 1 - i;
        temp = x[i];
        x[i] = x[j];
        x[j] = temp;
    }
}