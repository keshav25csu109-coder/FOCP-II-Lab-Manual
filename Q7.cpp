#include<iostream>
using namespace std;
int main()
{
    int s1,s2,s3;
    cout<<"Enter Score if 1st Player"<<endl;
    cin>>s1;
    cout<<"Enter Score if 2nd Player"<<endl;
    cin>>s2;
    cout<<"Enter Score if 3rd Player"<<endl;
    cin>>s3;

    if (s1>s2 && s1>s3) {
        cout<<"Winner is Player 1"<<endl;
    }
    else if (s2>s1 && s2>s3) {
    cout<<"Winner is Player 2"<<endl;
    }
    else if (s3>s1 && s3>s2) {
    cout<<"Winner is Player 3"<<endl;
    }
    return 0;
}

