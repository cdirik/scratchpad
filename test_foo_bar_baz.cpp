#include <assert.h>
#include <iostream>

#include "bar.h"
#include "foo.h"
#include "baz.h"

int main(int argc, char* argv[])
{
    bar b("Jack Sparrow");

    b.speak();

    foo* f = new foo("John Doe");
    assert(f);

    f->speak();

    f = new baz("Jack Doe");
    assert(f);

    f->speak();
}

