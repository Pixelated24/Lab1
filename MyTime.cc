// The implementation file for the MyTime class
#include "MyTime.h"
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
// Constructors
MyTime::MyTime(int h, int m){
	hours = h;
	minutes = m;
}

void MyTime::Reset(int h, int m){
	hours = h;
	minutes = m;
}

void MyTime::simplify(){
    hours += minutes/60;
	minutes = minutes%60;
}

MyTime MyTime::operator + (const MyTime& t1){
	int new_hours = hours + t1.hours;
	int new_minutes = minutes + t1.minutes;
	MyTime tmp(new_hours, new_minutes);
	tmp.simplify();
	return tmp;
}

MyTime MyTime::operator - (const MyTime& t1){
	int new_hours = hours - t1.hours;
	int new_minutes = minutes - t1.minutes;
	MyTime tmp(new_hours, new_minutes);
	tmp.simplify();
	return tmp;
}

MyTime MyTime::operator / (int num){
	int new_minutes = (hours * 60 + minutes) / num;
	MyTime new_time(0, new_minutes);
	new_time.simplify();
	return new_time;
}

MyTime MyTime::operator * (int num){
	int new_minutes = (hours * 60 + minutes) * num;
	MyTime new_time(0, new_minutes);
	new_time.simplify();
	return new_time;
}

bool MyTime::operator == (const MyTime& t1){
	return t1.hours == hours && t1.minutes == minutes;
}

bool MyTime::operator < (const MyTime& t1){
	return (hours*60 + minutes) < (t1.hours*60 + t1.minutes);
}

bool MyTime::operator <=(const MyTime& t1){
	return (t1.hours*60 + t1.minutes) <= (hours*60 + minutes);
}

void MyTime::output(ostream& outs) const {
	outs << hours <<':'<<setw(2)<<setfill('0')<< minutes;
}

void MyTime::input(istream& ins){
    char junk;
	int new_hours, new_minutes;
	ins>>new_hours;
  	ins.get(junk);
	ins>>new_minutes;
	hours = new_hours;
	minutes = new_minutes;
	simplify();
}


ostream& operator <<(ostream& outs, const MyTime& t1) { 
	t1.output(outs);
	return outs;
}

//istream& operator >> (istream& ins){
//	t1.input(ins);
//	return ins;
//}