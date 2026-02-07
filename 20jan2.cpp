// Strings using user input cin, getline and cignore
#include<iostream>
using namespace std;
int main()
{
    int a;
    float b;
    char c;
    string name;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    cout<<"Enter the value of c"<<endl;
    cin>>c;
    cout<<"Enter name";
    cin>>name;
    cout<<"The value of a = "<<a<<endl;
    cout<<"The value of b = "<<b<<endl;
    cout<<"The value of c = "<<c<<endl;
    cout<<"Name = "<<name<<endl;
    return 0;
}
// getline to read full line 
// cignore to ignore the previous spaces ]
/*
#include<iostream>
using namespace std;
int main()
{
    int a;
    float b;
    char c;
    string name;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    cout<<"Enter the value of c"<<endl;
    cin>>c;
    cout<<"Enter name";
    cin.ignore();
    getline(cin,name);
    cout<<"The value of a = "<<a<<endl;
    cout<<"The value of b = "<<b<<endl;
    cout<<"The value of c = "<<c<<endl;
    cout<<"Name = "<<name<<endl;
    return 0;
}
    */