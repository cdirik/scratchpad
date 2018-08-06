#include "bar.h"

#include <iostream>

using namespace std;

bar::bar(string name)
    : name(name)
{
}

bar::~bar()
{
}

void bar::speak()
{
    cout << "This bar is called " << name << endl;
}

