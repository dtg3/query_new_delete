#include "class_a.h"
#include "class_b.h"
#include <iostream>

int main(int argc, char *argv[]) {
    
    TestA a;
    a.foo();
    a.bar();
    a.foobar();
    a.fizz();
    a.useless();

    TestB b;
    b.foo();
    b.foobar();
    b.useless();
    b.extra_useless();

    return 0;
}