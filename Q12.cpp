#include<iostream>
using namespace std;
int main()
{
    int side1,side2,side3;
    cout<<"Enter side1: ";
    cin>>side1;
    cout<<"Enter side2: ";
    cin>>side2;
    cout<<"Enter side3: ";
    cin>>side3;
    if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2)
    {
        if (side1==side2 && side2==side3)
        {
            cout<<"It is an equilateral triangle";
        }
            else if (side1 == side2 || side2 == side3 || side1 == side3)
        {
            cout<<"It is an isoceles triangle";
        }
        else 
        {
            cout<<"It is a scalene triangle";
        }
    }
    else 
    {
        cout<<"The triangle is not valid";
    }
    return 0;
}
