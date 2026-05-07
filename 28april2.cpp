#include<iostream>
using namespace std;

namespace MySpace {
    int x=10;
    void show() {
        cout<<"Hello";
    }
}

int main() {
    int x=100;
    cout<<"\n my space :"<<MySpace::x;
    cout<<"normal variable x : "<<x;
    MySpace::show();
}
