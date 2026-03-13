// Bank Account Summary using Constructors 

#include<iostream>
using namespace std;
class BankAccount
{
string accountHolderName;
int accountNumber;
double balance;
public:
BankAccount(); // default constructor 
BankAccount(string name, int number, double b); // parametarised constructor 
void inputDetails();
void displayDetails();
void deposit(double amount);
void withdraw(double amount);
};
BankAccount::BankAccount(string name, int number, double b)
{
accountHolderName = name;
accountNumber = number;
balance = b;
}
BankAccount::BankAccount()
{
accountHolderName = "";
accountNumber = 1111;
balance = 0;
}
void BankAccount::deposit(double amount)
{
    balance+=amount;
    cout<<"\n Amount Deposited \n Balance = "<<balance;
}
void BankAccount::withdraw(double amount)
{
    if (amount>balance)
    cout<<"\n Denied..Insufficient Balance";
else 
{
    balance-=amount;
    cout<<"\n Amount Withdrawn \n Balance = "<<balance;
}
}
void BankAccount::displayDetails()
{
    cout<<"\n Account Number "<<accountNumber;
    cout<<"\n Account Holder Name: "<<accountHolderName;
    cout<<"\n Balance : "<<balance;
}
int main()
{
    BankAccount ac1;
  //  ac1.inputDetails();
    ac1.displayDetails();
    // char choice;
    // cout<<"\n D for Deposit, W for Withdraw : ";
    // cin>>choice;
    // if (choice=='D')
    // ac1.deposit(5000);
    // else
    // ac1.withdraw(12000);
    // ac1.displayDetails();
    return 0;
}