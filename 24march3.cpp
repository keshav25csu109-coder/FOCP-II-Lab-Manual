// inheritance - Q2 

#include<iostream>
using namespace std;

class Account 
{
    int account_number;int balance;
    public:
    Account() {
        cout<<"\n Account default constructor ";
        account_number = 9999999;balance = 5000;
    }
    Account (int an, int bl)
    {
    cout<<"\n Account Parametarzed constructor called";
        account_number = an; balance = bl;
    }
    void display_Account() {
        cout << "\n account number = "<< account_number<<"\n balance  = "<<balance;
    }

};

class Savings_Account:public Account
{
    float int_rate;
    public: 
    Savings_Account()
    {
        cout<<"\n Savings Account default constructor";
        int_rate  = 5.00;
    }
    
    // initalization list 
    
    Savings_Account (int an, int bl, float rate):Account(an,bl)
    {
        cout<<"\n Savings Account Parametarized";
        float int_rate = rate;
    }
    void calculate_interest()
    {
        display_Account();
        cout<<"\n Interest Rate = "<<int_rate;
    }
};

int main()
{
    Savings_Account s1,s2(6666,4000,4.00);
    s1.display_Account();
    s2.display_Account();
    return 0;
}