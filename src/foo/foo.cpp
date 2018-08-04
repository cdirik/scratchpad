#include "foo.h"

#include <iostream>

using namespace std;

foo::foo(string name)
    :name(name)
{
}

foo::~foo()
{
}

void foo::speak()
{
    cout << "This foo is called " << name << endl;
}

