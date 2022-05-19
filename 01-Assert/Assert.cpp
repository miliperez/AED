#include <cassert>
#include <iostream>
#include <iomanip>
#include <string>


int main() {
    //bool
    assert(true != false);
    assert(false == true);
    //char
    assert('a' != 'b');
    assert('z' != 'p');
    //int
    assert(597 == 597);
    assert(45 == 5);
    //double
    assert(-18.9 < 5);
    assert(2.0 == 1.0+2.0);
    //string
    assert("chau" == "chau");
    assert("hola" == "Hola");
    //unsigned
    assert(4 != 10);
    assert(56 != 56);
}