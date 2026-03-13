// check this 

#include <iostream>
using namespace std;
class Candy
{
string color;int points;
public:
Candy(); // default constructor
Candy(string clr); // parametarized 
Candy(string clr, int pts); // parametarized
void setCandy(string,int);
void displayCandy();
};
Candy::Candy()
{   color = "Black";points = 0;
}
Candy::Candy(string clr)
{
    color = clr;points = 0;
}
Candy::Candy(string clr, int pts)
{
    color = clr;points = pts;
}
void Candy::setCandy(string c,int p)
{
    color = c; points = p;
}
void Candy::displayCandy()
{   cout<<"\n Color : "<<color;
    cout<<"\n Points :"<<points;}
int main()
{   Candy c1,c2("Red",30);
    // c1.setCandy("Red",35);
    // c2.setCandy("Blue",40);
    c1.displayCandy();
    c2.displayCandy();
    return 0;
}

/*
// check this - loose and gain question

#include <iostream>
using namespace std;
class Candy
{
string color;int points;
public:
Candy(); // default constructor
Candy(string clr); // parametarized 
Candy(string clr, int pts); // parametarized
void setCandy(string,int);
void displayCandy();
void loose_Candy();
void loose_Candy(int);
void gain_Candy();
void gain_Candy(int);
};
Candy::Candy()
{   color = "Black";points = 0;
}
Candy::Candy(string clr)
{
    color = clr;points = 0;
}
Candy::Candy(string clr, int pts)
{
    color = clr;points = pts;
}
void Candy::setCandy(string c,int p)
{
    color = c; points = p;
}
void Candy::displayCandy()
{   cout<<"\n Color : "<<color;
    cout<<"\n Points :"<<points;
}
int main()
{   Candy c1,c2("Red",30);
    // c1.setCandy("Red",35);
    // c2.setCandy("Blue",40);
    c1.displayCandy();
    c2.displayCandy();
    c1.gain_Candy();
    c1.displayCandy();
    c1.loose_Candy();
    c1.displayCandy();
    return 0;
}
*/