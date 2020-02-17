//
// Created by Inori on 2020/2/17.
//

#include <stdio.h>
#include "page-194-extern-variable-file2.c"

int A;
void main()
{
    int power(int);
    int b =3,c,d,m;
    printf("enter the number a and its power m:");
    scanf("%d,%d\n",&A,&m);
    c = A * b;
    printf("%d * %d = %d\n",A,b,c);
    d = power(m);
    printf("%d**%d=%d",A,m,d);
}
