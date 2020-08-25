//时间：2019年6月7日16:07:48
//键盘操作演示行缓冲
/*
先介绍getchar()函数。

　　函数原型：int getchar(void);

　　说明：当程序调用getchar()函数时，程序就等着用户按键，用户输入的字符被存放在键盘缓冲区中，直到用户按回车为止(回车字符也放在缓冲区中)。
          当用户键入回车之后，getchar()函数才开始从键盘缓冲区中每次读入一个字符。也就是说，后续的getchar()函数调用不会等待用户按键，
          而直接读取缓冲区中的字符，直到缓冲区中的字符读完后，才重新等待用户按键。

          再通俗一点讲，当程序调用getchar()函数时，程序就等着用户按键，并等用户按下回车键返回。期间按下的字符存放在缓冲区，第一个字符作为函数返回值。
          继续调用getchar()函数，将不再等用户按键，而是返回您刚才输入的第2个字符;继续调用，返回第3个字符，直到缓冲区中的字符读完后，才等待用户按键。

*/
#include <iostream>
#include <cstdlib>
#include <stdio.h>


int main()
{
    char c;
    c = getchar();            //第一次调用getchar函数，程序执行时，可以输入一串字符并按下回车键，按下回车键后该函数才返回
    std::cout << c << std::endl;      //显示getchar()函数的返回值
    system("PAUSE");

    while ((c = getchar()) != '\n')  //循环多次调用getchar()函数,将每次调用gechar()函数的返回值显示出来,直到遇到回车符才结束
    {
        std::cout << c;
    }
    system("PAUSE");

    return 0;
}
