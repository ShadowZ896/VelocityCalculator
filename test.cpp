#include <iostream>
#include <cassert>
#include "checkSym.cpp"
using namespace std;

int main(){
    assert(traverseTree("20") == 0);
    assert(traverseTree("1000000") == 0);
    assert(traverseTree("0") == 0);
    cout << "Num Tests Passed!\n";

    assert(traverseTree("sin(x)") == 3);
    assert(traverseTree("cos(x)") == 4);
    assert(traverseTree("tan(x)") == 5);
    assert(traverseTree("sec^2(x)") == 6);
    cout << "Trig tests passed!\n";
}


