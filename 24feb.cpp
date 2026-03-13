
// Sherlock and Numbers - Topic 

// Student Record System
#include<iostream>
using namespace std;
class Student
{
int rollNo;
string name;
int marks1;
int marks2;
int marks3;
int calculateTotal() // getter
    {
        return (marks1+marks2+marks3);
    }
public:
void inputDetails() // setter
    {
        cout<<"\n Enter RollNo, name, marks1, marks2, marks3 :";
        cin>>rollNo>>name>>marks1>>marks2>>marks3;
    }
void displayDetails() // getter
{
    cout<<"\n Name : "<<name<<"\n Roll No :"<<rollNo;
    cout<<"\n Marks1 : "<<marks1<<"\n Marks2 :"<<marks2<<"\n Marks3 : "<<marks3;
    cout<<"\n Total : "<<calculateTotal();
}
};
int main()
{
    Student s1; // s1 is the object/instance of the class student
    s1.inputDetails();
    s1.displayDetails();
    return 0;
}