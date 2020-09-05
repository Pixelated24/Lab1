#include <iostream>
#include "MyTime.h"
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

void Addition();
void Subtract();
void Multiply();
void Division();
void EqualTo();
void LesserThan();
void GreaterThan();

int getChoice();


int main(){
    int choice = getChoice();
    switch(choice){
        case(1):
            Addition();
            break;
        case(2):
            Subtract();
            break;
        case(3):
            Multiply();
            break;
        case(4):
            Division();
            break;
        case(5):
            EqualTo();
            break;
        case(6):
            LesserThan();
            break;
        case(7):
            GreaterThan();
            break;
    }

    
}
int getChoice(){
    cout << "What kind of operation?" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Equal to" << endl;
    cout << "6. Lesser than" << endl;
    cout << "7. Greater than" << endl;
    cout << "-> ";
    int in;
    cin >> in;
    return in;
}
void Addition(){
    cout << "Enter a time: ";
    MyTime time1;
    cin >> time1;
    cout << "Time 1: " << time1 << endl;
    cout << "Enter a time: ";
    MyTime time2;
    cin >> time2;
    cout << "Time: " << time2 << endl;
    cout << time1 << " + " << time2 << " = " << time1 + time2 << endl;
}
void Subtract(){
    cout << "Enter a time: ";
    MyTime time1;
    cin >> time1;
    cout << "Time 1: " << time1 << endl;
    cout << "Enter a time: ";
    MyTime time2;
    cin >> time2;
    cout << "Time: " << time2 << endl;
    cout << time1 << " - " << time2 << " = " << time1 - time2 << endl;
}
void Multiply(){
    cout << "Enter a time: ";
    MyTime time;
    cin >> time;
    cout << "Time 1: " << time << endl;
    int scalar;
    cout << "Enter an integer: ";
    cin >> scalar;
    cout << time << " * " << scalar << " = " << time * scalar << endl;
}
void Division(){
    cout << "Enter a time: ";
    MyTime time;
    cin >> time;
    cout << "Time 1: " << time << endl;
    int scalar;
    cout << "Enter an integer: ";
    cin >> scalar;
    cout << time << " / " << scalar << " = " << time / scalar << endl;
}
void EqualTo(){
    cout << "Enter a time: ";
    MyTime time1;
    cin >> time1;
    cout << "Time 1: " << time1 << endl;
    cout << "Enter a time: ";
    MyTime time2;
    cin >> time2;
    cout << "Time 2: " << time2 << endl;
    if (time1 == time2){
        cout << time1 << " == " << time2 << " is true." << endl;
    } else {
        cout << time1 << " == " << time2 << " is false." << endl;
    }
}
void LesserThan(){
    cout << "Enter a time: ";
    MyTime time1;
    cin >> time1;
    cout << "Time 1: " << time1 << endl;
    cout << "Enter a time: ";
    MyTime time2;
    cin >> time2;
    cout << "Time 2: " << time2 << endl;
    if (time1 < time2){
        cout << time1 << " < " << time2 << " is true." << endl;
    } else {
        cout << time1 << " < " << time2 << " is false." << endl;
    }
}
void GreaterThan(){
    cout << "Enter a time: ";
    MyTime time1;
    cin >> time1;
    cout << "Time 1: " << time1 << endl;
    cout << "Enter a time: ";
    MyTime time2;
    cin >> time2;
    cout << "Time 2: " << time2 << endl;
    if (time1 > time2){
        cout << time1 << " > " << time2 << " is true." << endl;
    } else {
        cout << time1 << " > " << time2 << " is false." << endl;
    }
}