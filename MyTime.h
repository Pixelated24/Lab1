// Name: Chase Brown
// Date: 9/3/2020
// Lab: 2

#include <iostream>
using std::ostream;
using std::istream;
    
class MyTime
{   
  public:

    // CONVERT THESE CONSTRUCTORS INTO A SINGLE CONSTRUCTOR THAT USES 
    // DEFAULT ARGUMENTS
    MyTime(int h=0, int m=0);   
   
      
    void Reset(int h, int m);    
   
    MyTime operator + (const MyTime& t1);
 
    MyTime operator - (const MyTime& t1);
 
    MyTime operator * (int num);

    MyTime operator / (int num);

    bool operator == (const MyTime& t1);

    bool operator < (const MyTime& t1);

    bool operator <= (const MyTime& t1);

    void input(istream& ins);            

    void output(ostream& outs) const;

    int get_hours() const{return hours;}

    int get_minutes() const{return minutes;}
   
  private:
      void simplify();
      int hours;      // hours can be > 24
      int minutes;   // 0 <= minutes <= 59
 };
   
  ostream& operator <<(ostream& outs, const MyTime& t1);
  istream& operator >>(istream& ins, const MyTime& t1);