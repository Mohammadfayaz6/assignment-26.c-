/*2. Define a class Time to represent a time with instance variables h,m and s to store
hour, minute and second. Also define following member functions
a. void setTime(int,int,int)
b. void showTime()
c. void normalize()
d. Time add(Time)
*/
#include <iostream>
using namespace std;
class Time
{
private:
  int hour;
  int min;
  int sec;

public:
  void setTime(int h, int m, int s)
  {
    hour = h;
    min = m;
    sec = s;
  }
  void showTime()
  {
    cout << hour << " hours : " << min << " min : " << sec << " sec" << endl;
  }
  void normalize()
  {
    min = min + sec / 60;
    sec = sec % 60;
    hour = hour + min / 60;
    min = min % 60;
  }
  Time add(Time t)
  {
    Time Temp;
    Temp.sec = sec + t.sec;
    Temp.min = min + t.min;
    Temp.normalize();
    return Temp;
  }
};
int main()
{
  Time t1, t2, t3;
  t1.setTime(3, 50, 15);
  t2.setTime(6, 40, 60);
  t3 = t1.add(t2);

  t1.showTime();
  t2.showTime();
  t3.showTime();

  return 0;
}