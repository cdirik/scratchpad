#pragma once

#include<string>

class foo
{
public:
    foo(std::string name);

    virtual ~foo();

    virtual void speak();

private:
    std::string name;
};

