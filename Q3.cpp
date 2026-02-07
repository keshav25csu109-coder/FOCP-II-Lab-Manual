#include<iostream>
using namespace std;
int main()
{
    char choice,C,F,c,f;
    float a,b;
    cout<<"Enter C for Celsius to Farenheit or Enter F for Farenheit to Celsius";
    cin>>choice;
    if (choice == 'C' || choice == 'c')
    {
        cout<<"Enter the value in Celsius: ";
        cin>>a;
        cout<<"The value in Farenheit is : "<<(9.0/5)*a+32;
    }
    else if (choice == 'F' || choice == 'f')
    {
        cout<<"Enter the value in Farenheit: ";
        cin>>b;
        cout<<"The value in Celsius is: "<<(5.0/9)*(b-32);
    }
    else {
        cout<<"Invalid choice";
    }
    return 0;
}