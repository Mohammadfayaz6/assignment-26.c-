#include <iostream>
//6. Define a class student and write a program to enter student details using constructor
//and define member function to display all the details.
#include <string.h>
using namespace std;
class Student
{
private:
    int stu_rno;
    char stu_name[20];
    int stu_marks;

public:
    Student(int r,const char name[], int m)
    {
        stu_rno = r;
        strcpy(stu_name, name);
        stu_marks = m;
    }
    void display_details()
    {
        cout << "details of first student" << endl;
        cout << "student roll no : " << stu_rno << endl;
        cout << "student name is : " << stu_name << endl;
        cout << "student marks is : " << stu_marks << endl;
    }
};
int main()
{
    Student s1(14, "fayaz", 78),s2(6,"firzan",95);
    s1.display_details();

    cout<<"\ndetials of another student"<<endl;
    s2.display_details();

    return 0;
}