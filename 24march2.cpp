// inheritance - Q1 

#include<iostream>
using namespace std;

class Person 
{
    string name;int age;
    public:
    Person() {
        cout<<"\n Person default constructor ";
        name = "default";age = 18;
    }
    Person (string nm, int ag)
    {
    cout<<"\n Person Parametarzed constructor called";
        name = nm; age = ag;
    }
    void display() {
        cout << "\n name = "<< name<<"\n age = "<<age;
    }

};

class Student:public Person
{
    string rollno;
    public: 
    Student()
    {
        cout<<"\n Student default constructor";
        rollno = "25CSU109";
    }
    
    // initalization list 
    
    Student (string na, int ag, string rno):Person(na,ag)
    {
        cout<<"\n Student Parametarized";
        rollno = rno;
    }
    void display_student()
    {
        display();
        cout<<"\n Rollno = "<<rollno;
    }
};

int main()
{
    Student p1,p2("abcd",23,"25CSU109");
    p1.display_student();
    p2.display_student();
    return 0;
}