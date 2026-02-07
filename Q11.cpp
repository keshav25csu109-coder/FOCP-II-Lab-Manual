#include<iostream>
using namespace std;
int main()
{
    int quantity;
    float unit_price;
    cout<<"Enter the quantity: "<<endl;
    cin>>quantity;
    cout<<"Enter the unit price: "<<endl;
    cin>>unit_price;
    float amount = (quantity*unit_price);
    float total_amount;
    if (quantity>1000)
    {
        float discount = 0.1*(amount);
    total_amount = amount - discount;
    }
    else {
    total_amount = amount;
    }
    cout<<"The Final amount after discount is : "<<total_amount;
    return 0;
}