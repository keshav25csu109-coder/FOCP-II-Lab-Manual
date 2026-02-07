#include<iostream>
using namespace std;
int main()
{
       // (Using a temporary variable)
     int num, num2, temp;
     cout<<"Enter  integer 1: ";
     cin>>num;
     cout<<"Enter  integer 2: ";
     cin>>num2;
     temp = num;
     num = num2;
     num2 = temp;
     cout<<"After swapping: "<<num<<" " <<num2;
    return 0;
    }
