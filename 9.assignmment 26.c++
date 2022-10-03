/*9. Define a class Bill and define its member function get() to take detail of customer ,
calculateBill() function to calculate electricity bill using below tariff :
Upto 100 unit RS. 1.20 per unit
From 100 to 200 unit RS. 2 per unit
Above 200 units RS. 3 per unit.
*/
#include<iostream>
using namespace std;
class Bill
{
    float units;
    public:
    float get()
    {
        cout<<"Enter The units "<<endl;
        cin>>units;
        return units;
    }
    float calculate_bill()
    {
        float amount;
        if(units<=100)
        {
            return amount=units*1.20;
        }
        else
        {
            if(units<=200)
            {
                return amount=(100*1.20)+(units-100)*2;
            }
            else
            {
                if(units>200)
                {
                   return amount=(200*2)+(units-200)*3;
                }
                else
                {
                    return 0;
                }
            }
        }
    }
    


};
int main()
{
    Bill charge1;
    charge1.get();
    cout<<"total amount of electricity bill charge ="<<charge1.calculate_bill();


    return 0;
}