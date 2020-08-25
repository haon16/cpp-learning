//时间：2019年3月18日23:38:07
//友元关系
#include <iostream>
#include <string>

class Lovers
{
public:
    Lovers(std::string theName);
    void kiss(Lovers *lover);
    void ask(Lovers *lover, std::string something);

protected:
    std::string name;

    friend class Others;
};

class Boyfriend : public Lovers
{
public:
    Boyfriend(std::string theName);
};

class Girlfriend : public Lovers
{
public:
    Girlfriend(std::string theName);
};

class Others
{
public:
    Others(std::string theName);
    void kiss(Lovers *lover);

protected:
    std::string name;
};

Lovers::Lovers(std::string theName)
{
    name = theName;
}

void Lovers::kiss(Lovers *lover)
{
    std::cout << name << "亲吻我们家的" << lover->name << std::endl;
}

void Lovers::ask(Lovers *lover, std::string something)
{
    std::cout << "宝贝" << lover->name << "帮我" << something << std::endl;
}

Boyfriend::Boyfriend(std::string theName) : Lovers(theName)
{
}

Girlfriend::Girlfriend(std::string theName) : Lovers(theName)
{
}

Others::Others(std::string theName)
{
    name = theName;
}

void Others::kiss(Lovers *lover)
{
    std::cout << name << "亲一下" << lover->name << std::endl;
}

int main()
{
    Boyfriend boyfriend("A君");
    Girlfriend girlfriend("B妞");
    Others others("路人甲");

    girlfriend.kiss(&boyfriend);
    girlfriend.ask(&boyfriend, "洗衣服");

    std::cout << "路人甲登场!!!\n";
    others.kiss(&girlfriend);

    return 0;
}
