//
// Created by Inori on 2020/2/9.
//

#include <stdio.h>
void main(){
    int i = 3;
    int j = (i++)+(i++)+(i++);
    printf("i:%d;j:%d",i,j);
}