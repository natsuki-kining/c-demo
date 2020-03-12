//
// Created by Inori on 2020/3/11.
//
// 用二进制的方式将一个磁盘文件中的信息复制到另一个磁盘文件中，只需将r、w改为rb、wb即可。

#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *in,*out;
    char inFile[100] = "E:\\IT\\code\\c\\c-demo\\book\\c-programming-3\\chapter13\\page-338-file-copy-binary.c",
    outFile[100]= "E:\\IT\\code\\c\\c-demo\\book\\c-programming-3\\chapter13\\target-binary.c";

    if ((in = fopen(inFile,"rb")) == NULL){
        printf("cannot open inFile\n");
        exit(0);
    }
    if ((out = fopen(outFile,"wb")) == NULL){
        printf("cannot open outFile\n");
        exit(0);
    }
    while (!feof(in)){
        fputc(fgetc(in),out);
    }
    fclose(in);
    fclose(out);
}
