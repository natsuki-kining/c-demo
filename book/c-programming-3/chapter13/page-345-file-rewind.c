//
// Created by Inori on 2020/3/15.
//

#include <stdio.h>
void main()
{
    FILE * fp1,* fp2;
    fp1 = fopen("E:\\IT\\code\\c\\c-demo\\book\\c-programming-3\\chapter13\\file1.c","r");
    fp2 = fopen("E:\\IT\\code\\c\\c-demo\\book\\c-programming-3\\chapter13\\file2.c","w");
    while(!feof(fp1)) putchar(getc(fp1));
    rewind((fp1));
    while (!feof(fp1)) putc(getc(fp1),fp2);
    fclose(fp1);
    fclose(fp2);
}