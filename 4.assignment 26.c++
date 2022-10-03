//4. Define a class Counter and Write a program to Show Counter using Constructor.
#include <iostream>
using namespace std;
class counter
{
private:
    static int count;
    

public:
    counter()
    {
        count++;
    }
    int getcount()
    {
        return count;
    }
};
int counter::count=0;
int main()
{
    counter c1, c2;
    cout << "count =" << c1.getcount();
    return 0;
}