#include<iostream>
using namespace std;
int main()
{
    float num_employee;
    float basic_sal;
    cout<<"Enter the number of employees: ";
    cin>>num_employee;
    cout<<"Enter the basic salary: ";
    cin>>basic_sal;
    float bonus = 0.12*basic_sal;
    cout<<"The bonus is: "<<bonus;
    cout<<"\nThe number of employees is: "<<num_employee;
    cout<<"\nThe net salary for each employee is: "<<basic_sal+ bonus;
    cout<<"\nThe net salary for all employee is: "<<num_employee*(basic_sal+ bonus);
    return 0;
}
