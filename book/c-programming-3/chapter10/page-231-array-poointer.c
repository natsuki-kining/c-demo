//
// Created by Inori on 2020/2/24.
//
//数组与指针
//遍历数组的三种方法

#include <stdio.h>
void main()
{
    void method1(int array[10]);
    void method2(int array[10]);
    void method3(int array[10]);

    int array[10] = {1,2,3,4,5,6,7,8,9,0};

    method1(array);
    method2(array);
    method3(array);
}

//简单的for循环遍历
void method1(int array[10])
{
    printf("method1: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ",array[i]);
    }
    printf("\n");
}
void method2(int array[10])
{
    printf("method2: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ",* (array +i ));//* (array +i )是array+i所指向的数组元素，即array[i]。
    }
    printf("\n");
}
void method3(int array[10])
{
    printf("method3: ");
    int * p;
    //其中p = array是将数组的首元素的地址赋给p。
    // 如果指针元素p已指向数组中的一个元素，则p+1指向同一数组的下一个元素，而不是将p的值简单加一。
    //例如float型数组，每个元素占四个字节，则p+1的值（地址）加4个字节，以使它指向下一个元素。
    //p+1所代表的地址实际上是P+1*d，d是一个数组元素所占的字节数
    for (p = array;p<(array+10);p++) {
        printf("%d ",* p);
    }
    printf("\n");
}