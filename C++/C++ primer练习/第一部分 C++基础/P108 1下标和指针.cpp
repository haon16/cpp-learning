//时间：2019年5月15日11:13:37
//下标和指针

#include <iostream>

int main()
{
    int ia[] = {0,2,4,6,8};

    int i = ia[2];         //ia转换成指向数组首元素的指针  ia[2]得到(ia+2)所指的元素

    int *p = ia;           //p指向ia的首元素
    i = *(p + 2);          //等价于i = ia[2]

    std::cout << i << " " << *p << " " << *(p + 2) << std::endl;

    //只要指针指向的是数组中的元素或者数组中尾元素的下一个未知，都可以执行下标运算
    int *ptr = &ia[2];       //p指向索引为2的元素
    int j = ptr[1];          //p[1]等价于*(p + 1),就是ia[3]表示的元素
    int k = ptr[-2];         //p[-2]是ia[0]表示的那个元素                   标准库类型限定使用的下标必须是无符号类型，内置的下标运算无此要求，可以处理负值

    std::cout << *ptr << " " << j << " " << k <<std::endl;

    return 0;
}
