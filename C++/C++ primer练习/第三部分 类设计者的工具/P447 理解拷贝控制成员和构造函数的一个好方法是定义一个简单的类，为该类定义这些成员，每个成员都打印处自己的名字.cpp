//时间：2019年6月28日17:09:48
//理解拷贝控制成员和构造函数的一个好方法是定义一个简单的类，为该类定义这些成员，每个成员都打印处自己的名字

#include <iostream>
#include <vector>

struct X
{
    X() {std::cout << "构造函数 X()" << std::endl;}
    X(const X &) {std::cout << "拷贝构造函数 X(const X &)" << std::endl;}
    X& operator=(const X &rhs) {std::cout << "拷贝赋值运算符 =(const x&)" << std::endl; return *this;}
    ~X() {std::cout << "析构函数 ~X()" << std::endl;}
};

void f1(X x)
{

}

void f2(X &x)
{

}

int main()
{
    std::cout << "局部变量：" << std::endl;
    X x;
    std::cout << std::endl;

    std::cout << "非引用参数传递：" << std::endl;
    f1(x);
    std::cout << std::endl;

    std::cout << "引用参数传递：" << std::endl;
    f2(x);
    std::cout << std::endl;

    std::cout << "动态分配：" << std::endl;
    X *px = new X;   //默认初始化X
    std::cout << std::endl;

    std::cout << "添加到容器中：" << std::endl;
    std::vector<X> vx;
    vx.push_back(x);
    std::cout << std::endl;

    std::cout << "释放动态分配对象：" << std::endl;
    delete px;
    std::cout << std::endl;

    std::cout << "间接初始化和赋值：" << std::endl;
    X y = x;
    y = x;
    std::cout << std::endl;

    std::cout << "程序结束" << std::endl;

    return 0;
}
