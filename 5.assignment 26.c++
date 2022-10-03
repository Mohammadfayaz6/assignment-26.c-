//5. Define a class Date and write a program to Display Dateand initialise date object
//using Constructors.
#include<iostream>
using namespace std;
class Date
{
 private:
  int date;
  int month;
  int year;
  public:
  Date(int d,int m,int y)
  {
    date=d;
    month=m;
    year=y;

  }
  void display()
  {
    cout<<"Today's date is : ";
    cout<<date<<"-"<<month<<"-"<<year; 
  }
};
int main()
{
    Date d1(27,9,2022);
    d1.display();
    return 0;
}