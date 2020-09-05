#include "m.h"
#include <iostream>
#include <string>
using std::string;
using std::ostream;

m::m(int d=0){
    b = d;
}

ostream& m::operator <<(ostream& outs){
    outs << b;
    return out;
}
