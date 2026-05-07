// Exception Handling 

#include<iostream>
#include<exception>
using namespace std; 
int main() 
{
    int a = 10,b = 5;
    try{ // Critical code is kept in try 
    if (b==0)
    throw "Division by Zero is not allowed";
    // throw 404;
    
    cout<<"\n Result : "<<a/b; 
    }
    catch(const char*msg)
    {
        cout<<msg;
    }
    // catch(...)
    // {
    //     cout<<"\n This is generic catch";
    // }
    cout<<"\n This is normal line of code";
}




