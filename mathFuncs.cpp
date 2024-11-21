#include <iostream>
using namespace std;

//pow(base, power) to raise a number to a given power

int getDeriv(int factor){
    switch (factor){
        case 0:
            return 0;
        default:
            return 1;
    }
}

bool isNumeric(string line)
{
    for (char c : line) {
        if (!std::isdigit(c)) {
            return false;
        }
    }
  return true;
}