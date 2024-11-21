#include <iostream>
#include <sstream>
#include <cstring>
#include "enums.h"
#include "mathFuncs.cpp"
using namespace std;

int traverseTree(string node){
    string token;
    char del = ' ';
    stringstream stream(node);
    getline(stream, token, del);

    if(isNumeric(token)){
        return NUM;
    }
    return -1; 
}