//
// Created by Inori on 2020/3/11.
//
// 将一个磁盘文件中的信息复制到另一个磁盘文件中

#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *in,*out;
    char inFile[100] = "E:\\IT\\code\\c\\c-demo\\book\\c-programming-3\\chapter13\\page-337-file-copy.c",
    outFile[100]= "E:\\IT\\code\\c\\c-demo\\book\\c-programming-3\\chapter13\\target.c";

    if ((in = fopen(inFile,"r")) == NULL){
        printf("cannot open inFile\n");
        exit(0);
    }
    if ((out = fopen(outFile,"w")) == NULL){
        printf("cannot open outFile\n");
        exit(0);
    }
    while (!feof(in)){
        fputc(fgetc(in),out);
    }
    fclose(in);
    fclose(out);
}
