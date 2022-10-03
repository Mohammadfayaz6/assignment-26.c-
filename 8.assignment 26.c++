/*8. Define a class Bank and define member functions to read principal , rate of interest
and year. Another member functions to calculate simple interest and display it.
Initialise all details using constructor.*/
#include<iostream>
using namespace std;
class Bank
{
  double P;
  double R;
  double T;
  public:
  Bank(double principle ,double rate,double time)
  {
    cout<<"parametrized constructor is called "<<endl;
    P=principle;
    R=rate;
    T=time;
  }
  double principle()
  {
    return P;
  }
  double rate_of_interest()
  {
    return R;
  }
  double years()
  {
    return T;
  }
  double calc_simple_interest()
  {

    double Simple_interest=principle()*rate_of_interest()*years();
    return Simple_interest;
  }
  void display()
  {
     cout<<"principle = "<<P<<endl<<"rate of interest = "<<R<<endl<<"Time span = "<<T<<endl;
     cout<<"\nsimple interest is = "<<calc_simple_interest();
  }
  Bank()
  {
    cout<<"default constructor is called"<<endl;
  }
};
int main()
{
    Bank b1(25000,6.5,3),b2;
    b1.principle();
    b1.rate_of_interest();
    b1.years();
    b1.calc_simple_interest();
    b1.display();

    return 0;
}