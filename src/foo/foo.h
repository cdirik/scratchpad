#include<string>

class foo
{
public:
    foo(std::string);

    virtual ~foo();

    virtual void speak();

private:
    std::string name;
};

