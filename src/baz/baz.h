#pragma once

#include<string>

#include "foo.h"

class baz : public foo
{
public:
    baz(std::string);

    virtual ~baz();

    virtual void speak();

private:
    std::string name;
};

