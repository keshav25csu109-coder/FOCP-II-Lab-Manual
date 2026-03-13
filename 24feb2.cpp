// Bank Account Summary
#include<iostream>
using namespace std;
class BankAccount
{
string accountHolderName;
int accountNumber;
double balance;
public:
void inputDetails();
void displayDetails();
void deposit(double amount);
void withdraw(double amount);
};
void BankAccount::inputDetails()
{
cout<<"Enter Account Number";
cin>>accountNumber;
cout<<"\n Enter accountHolderName ";
cin.ignore();
getline(cin,accountHolderName);
cout<<"\n Enter Balance : ";
cin>>balance;
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
    ac1.inputDetails();
    ac1.displayDetails();
    char choice;
    cout<<"\n D for Deposit, W for Withdraw : ";
    cin>>choice;
    if (choice=='D')
    ac1.deposit(5000);
    else
    ac1.withdraw(12000);
    ac1.displayDetails();
    return 0;
}