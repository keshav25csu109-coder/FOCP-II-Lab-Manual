#include<iostream>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"Enter the marks of student 1";
    cin>>a;
    cout<<"Enter the marks of student 2";
    cin>>b;
    cout<<"Enter the marks of student 3";
    cin>>c;
    cout<<"The marks of student 1 is: "<<a<<endl;
    cout<<"The marks of student 2 is: "<<b<<endl;
    cout<<"The marks of student 3 is: "<<c<<endl;
    cout<<"The average of the marks of students is: "<<(a+b+c)/3;
    return 0;
}