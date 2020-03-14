//
// Created by Inori on 2020/3/13.
//

//

#include <stdio.h>
#define SIZE 4
struct student_type
{
    char name[10];
    int num;
    int age;
    char addr[15];
} stud[SIZE];

void main()
{
    FILE * fp;
    int i;
    fp=fopen("stu_list","rb");

    for(int i = 0;i<SIZE;i++){
        fread(&stud[i],sizeof(struct student_type),1,fp);
        printf("%-10s %4d %4d %-15s\n");

    }
    fclose(fp);
}
