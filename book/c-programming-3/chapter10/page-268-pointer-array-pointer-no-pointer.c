//
// Created by Inori on 2020/3/3.
//
// 指针数组和指向指针的指针
// 按字母顺序由大到小输出

#include <stdio.h>
#include <string.h>
void main()
{
    void sort(char *name[],int n);
    void print(char *name[],int n);
    char *name[]={"Follow me","BASIC","Great Wall","FORTRAN","Computer design","Hello world"};
     //sizeof 可以获得数据类型或变量在内存中所占的字节数
    printf("sizeof(name) / sizeof(name[0]):%d\n",(sizeof(name) / sizeof(name[0])));
    int n = sizeof(name) / sizeof(name[0]);
    sort(name,n);
    print(name,n);
}


void sort(char *name[],int n)
{
    char * temp;
    for (int i = 0; i < n-1; ++i) {
        int k = i;
        for (int j = i+1; j < n; ++j) {
            //C 库函数 int strcmp(const char *str1, const char *str2) 把 str1 所指向的字符串和 str2 所指向的字符串进行比较。
            if(strcmp(name[k],name[j])>0){
                k = j;
            }

        }
        if(k != i)
        {
            temp = name[i];
            name[i] = name[k];
            name[k] = temp;
        }
    }
}
void print(char *name[],int n)
{
    for (int i = 0; i < n; ++i) {
        printf("%s\n",name[i]);
    }
}