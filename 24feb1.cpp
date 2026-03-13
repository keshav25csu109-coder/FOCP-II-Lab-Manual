// Rectangle Calculator 
#include<iostream>
using namespace std;
class Rectangle
{
float length;
float width;
float calculateArea()
{
        return (length*width);
}
float calculatePerimeter()
{
        return (2*(length+width));
}
public:
void inputDimensions()
{
    cout<<"\n Enter Length, Width :";
    cin>>length>>width;
}
void displayResult()
{
    cout<<"\n Length : "<<length<<"\n Width :"<<width;
    cout<<"\n Area : "<<calculateArea();
    cout<<"\n Perimeter : "<<calculatePerimeter();
}
};
int main()
{
    Rectangle s1; // s1 is the object/instance of the class student
    s1.inputDimensions();
    s1.displayResult();
    return 0;
}
