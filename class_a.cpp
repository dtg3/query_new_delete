#include "class_a.h"
#include <iostream>

void TestA::foo() {
    int *i = new int();
    *i = 10;
    std::cout << number + *i << "\n";
    delete i;
}

void TestA::bar() {
    std::cout << number - 1 << "\n";
}

void TestA::foobar() {
    std::cout << number << " " << number - 1 << "\n";
}

void TestA::fizz() {
    std::cout << ++number << "\n";
}

void TestA::useless() {
    int *junk = new int(6);
    std::cout << number++ + *junk << "\n";
    delete junk;
}