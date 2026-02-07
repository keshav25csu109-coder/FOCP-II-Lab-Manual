#include<iostream>
using namespace std;
int main()
{
    int item_num, quantity;
    float unit_price;
    cout<<"Enter the item_num: "<<endl;
    cin>>item_num;
    cout<<"Enter the quantity: "<<endl;
    cin>>quantity;
    cout<<"Enter the unit price: "<<endl;
    cin>>unit_price;
    float amount = (item_num*quantity*unit_price);
    float discount = 0.2*(amount);
    float total_amount = amount - discount;
    cout<<"The Final amount after discount is : "<<total_amount;
    return 0;
}
