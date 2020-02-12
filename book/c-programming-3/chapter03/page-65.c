//
// Created by Inori on 2020/2/11.
//

//逗号表达式

#include <stdio.h>
void main(){
    int a = 2,b = 2,c = 2;
    a = (3,a*3);
    b = 3 * 5 , b * 6;//不生效
    c = (3,(c * 3, (c * 3, c * 4 )));
    int d = (d = 3,d * 3);

    printf("a:%d,b:%d,c:%d,d:%d",a,b,c,d);
}
