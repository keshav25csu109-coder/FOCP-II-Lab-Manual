/*// abstract class 
#include<iostream>
using namespace std;
class shape 
{
    public:
    shape() 
    {
        cout<<"\n shape default const called";
    }
    virtual void area() = 0;
    void display() 
    {
        cout<<"\n we are 2 d shapes";
    }
};
class Rectangle:public shape
{
    public:
    int length;int width;
    Rectangle (int l=5,int w=10):length(l), width(w) {
        cout<<"\n Rectangle object created";
    }
   void area() 
    {
        cout<<"\n area = "<<length*width;
    }
};

int main()
{
   // shape *s1,s2;
    Rectangle r2(50,45);
    return 0;
}
*/
// const and final keyword 
#include<iostream>
using namespace std;
class shape 
{
    public:
    shape() 
    {
        cout<<"\n shape default const called";
    }
    virtual void area() = 0;
    virtual void display() // final
    {
        cout<<"\n we are 2 d shapes";
    }
};
class Rectangle:public shape
{
    public:
   int length;int width;
    Rectangle (int l=5,int w=10):length(l), width(w) {
        cout<<"\n Rectangle object created";
    }
   void area() 
    {
        cout<<"\n area = "<<length*width;
    }
    void display_dim() const {}// cannot change values
    // {
    //    length++;
    //     cout<<"\n length and width"<<length<<width;
    // } 
    void display() // final keyword is used 
    {
        cout<<"\n I am rectangle display";
    }
};

int main()
{
   // shape *s1,s2;
    Rectangle r2(50,45);
    r2.display();
    r2.display_dim();
    return 0;
}