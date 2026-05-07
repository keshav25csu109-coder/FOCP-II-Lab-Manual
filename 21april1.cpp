// File Handling - Read line 

#include<iostream>
// #include<fstream>
using namespace std;
int main() { 

    // ifstream fin("final.txt");
    // string line;
    // if(!fin.is_open())
    {
        cout<<"\n issue with the file, can't read";
        return 0;
    }
    // while (fin>>line) //
    // while(getline(fin,line))
    // {
    //     cout<<line<<endl;
    // }
    // fin.close();
}

/*
#include<iostream>
#include<fstream>
using namespace std;
int main() { 

    ifstream fin("final.txt");
    string line;
    if(!fin.is_open())
    {
        cout<<"\n issue with the file, can't read";
        return 0;
    }
    // while (fin>>line) //
    cout<<"\n read cursor position before we start reading"<<fin.tellg()<<endl;
    while(getline(fin,line))
    {
        cout<<line<<endl;
        cout<<"\n read cursor position"<<fin.tellg()<<endl;
    }
    fin.close();
}
    */