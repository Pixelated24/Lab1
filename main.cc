#include <iostream>
#include "MyTime.h"
using std::cout;
using std::cin;
using std::endl;


int main(){
    int hour, min;
    cout << "Enter hour: ";
    cin >> hour;
    cout << "Enter minute: ";
    cin >> min;


    MyTime a(10,1);
    cout << a;
    
}