//时间：2019年5月15日22:25:00
//多维数组的初始化

#include <iostream>

int main()
{
    int ia[3][4] = {
                       {0,1,2,3};
                       {4,5,6,7};
                       {8,9,10,11};
                   };

    int ia2[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};

    int ia3[3][4] = {{0},{4},{8}};                     //初始化每行首元素

    int ia4[3][4] = {0,3,6,9}                          //初始化第一行的4个元素


    return 0;
}
