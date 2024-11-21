#include <iostream>
#include <cassert>
#include "checkSym.cpp"
using namespace std;

int main(){
    assert(traverseTree("20") == 0);
    assert(traverseTree("1000000") == 0);
    assert(traverseTree("0") == 0);
    cout << "Num Tests Passed!\n";
}


