// 3. Define a class Cube and calculate Volume of Cube and initialise it using constructor.
#include<iostream>
using namespace std;
class cube
{
   public:
     float side;
     float volume()
     {
       return side*side*side; 
     }

     cube(float s)
     {
        cout<<"A constructor is called"<<endl;
        side=s;
     }
     cube()
     {
        cout<<"A default constructor is called"<<endl;
     }
};
 int main()
{
    cube obj(3.14);
    cube obj2;
    cout<<"side of the cube is "<<obj.side<<endl;
    cout<<"volume of first cube is "<<obj.volume()<<endl;
    cout<<"enter the length of sec cube"<<endl;
    cin>>obj2.side;
    cout<<"length of second cube is "<<obj2.volume();
    return 0;
} 
