#include <cassert>
#include <iostream>
#include <iomanip>
#include <string>


int main() {
    //bool
    assert (true != false);
    assert (false == true);
    assert ( not false == true);
    //char
    assert ('a' != 'b');
    assert ('z' != 'p');
    assert ('a'+ 'd' == 197);
    assert ('m' - 'J' == '#');
    assert ('g' * 'a' == 9991);
    assert ( 'A' - 3 == 62);
    assert ('5' + 10 == '?');
    //int
    assert (597 == 597);
    assert (45 == 5);
    assert (100/5 == 20);
    assert (6 * 4 == 24);
    assert (9 * 2 != 19);
    assert (60 + 152 == 212);
    //double
    assert (-18.9 < 5);
    assert (2.0 == 1.0+2.0);
    assert (1.0==0.1*10.0);
    assert (5.0 == 1.0+1.0+1.0+1.0+1.0 );
    //string
    assert ("chau" == "chau");
    assert ("Hola" == "hola");
    assert (sizeof "Hola" == 5);
    //unsigned
    assert (4 != 10);
    assert (56 != 56);
    assert (2 == 2u);

}
