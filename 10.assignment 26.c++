/*10. Define a class StaticCount and create a static variable. Increment this variable in a
function and call this 3 times and display the result.
*/
#include<iostream>
using namespace std;
class staticcount
{
    private:
    static int count;
    public:
    int count_function()
    {
        return count++;
    }
    void display_count()
    {
        cout<<"count = "<<count;
    }

};
int staticcount::count=0;
int main()
{
    staticcount s1;
    s1.count_function();
    s1.count_function();
    s1.count_function();
    s1.display_count();
    return 0;
}