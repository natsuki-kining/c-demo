//
// Created by Inori on 2020/2/16.
//
// 多维数组名做函数参数
// 有一个3x4的矩阵，求所有元素中的最大值

#include <stdio.h>

void main()
{
    int max_value(int arrays[3][4]);
    int arrays[3][4] = {{1,3,5,7},{2,4,6,8},{15,17,34,12}};
    printf("max_value is %d",max_value((arrays)));
}

int max_value(int arrays[3][4])
{
    int i,j,max = arrays[0][0];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            if(arrays[i][j]>max)
            {
                max = arrays[i][j];
            }
        }
    }
    return max;
}
