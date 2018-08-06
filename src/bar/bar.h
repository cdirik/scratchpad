#pragma once

#include <string>

class bar
{
public:
    bar(std::string name);

    virtual ~bar();

    virtual void speak();

private:
    std::string name;
};

