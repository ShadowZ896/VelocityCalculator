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
    stringstream getpar(token);
    del = '(';
    getline(getpar, token, del);

    if(isNumeric(token)){
        return NUM;
    } 
    else if(token == "sin"){
        return SINE;
    }
    else if(token == "cos"){
        return COSINE;
    }
    else if(token == "tan"){
        return TANGENT;
    }
    else if(token == "sec^2"){
        return SECANT;
    }
    return -1; 
}