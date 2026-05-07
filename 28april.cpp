#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>v = {10,20,30,40};
    for (int i=0;i<v.size();i++)
    {
        v[i] =+5;
        cout<<v[i];
        cout<<v.at(i);
    }
}



