#include "baz.h"

#include <iostream>

using namespace std;

baz::baz(std::string name)
    : foo(name), name(name)
{
}

baz::~baz()
{
}

void baz::speak()
{
    cout << "I am " << name
         << " and I am from foo family." << endl;
}

