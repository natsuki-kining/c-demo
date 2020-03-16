//
// Created by Inori on 2020/3/16.
//

#include <stdio.h>
#include <stdlib.h>

struct student_type{
    char name[10];
    int num;
    int age;
    char sex;
} stud[10];

void main()
{
    FILE * fp;
    if ((fp=fopen("E:\\IT\\code\\c\\c-demo\\book\\c-programming-3\\chapter13\\page-345-file-rewind.c","rb")==NULL)){
        printf("can not open file");
        exit(0);
    }
    for (int i = 0; i < 10; ++i) {
        fseek(fp,i * sizeof(struct student_type),0);
        fread(&stud[i], sizeof(struct student_type),1,fp);
        printf("%s %d %d %c\n",stud[i].name,stud[i].num,stud[i].age,stud[i].sex);
    }
    fclose(fp);
}
