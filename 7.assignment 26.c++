/*7. Define a class Box and write a program to enter length, breadth and height and
initialise objects using constructor also define member functions to calculate volume
of the box.
*/
#include <iostream>
using namespace std;
class box
{
private:
    float length;
    float breadth;
    float height;

public:
    box(float l, float b, float h)
    {
        length = l;
        breadth = b;
        height = h;
    }

    float calc_volume()
    {
        float vol;
        return vol = length * breadth * height;
    }
};
int main()
{
    box b1(5, 4.6, 6);
    cout << "volume of box is = " << b1.calc_volume();

    return 0;
}