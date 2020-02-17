//
// Created by Inori on 2020/2/17.
//

extern A;
int power(int n)
{
    int y = 1;
    for (int i = 0; i < n; i++) {
        y *= A;
    }
    return(y);
}