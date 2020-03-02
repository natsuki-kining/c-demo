//
// Created by Inori on 2020/3/2.
//
// 找出其中不及格课程的学生及其学生号

#include <stdio.h>
void main()
{
    float score[][4]={{61,70,80,90},{56,89,67,88},{34,78,90,66}};
    float * search(float(* pointer)[4]);
    float *p;
    for (int i = 0; i < 3; ++i) {
        p=search(score+i);
        if(p==*(score+i))
        {
            printf("No.%d scores:",i);
            for (int j = 0; j < 4; ++j) {
                printf("%5.2f",*(p+j));
            }
            printf("\n");
        }
    }
}

float * search(float(* pointer)[4])
{
    float *pt = *(pointer+1);
    for (int i = 0; i < 4; ++i) {
        if(*(*(pointer+i))<60)
        {
            pt = * pointer;
        }
        return pt;
    }

}
