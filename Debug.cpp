/*#include <iostream>
using namespace std;
int main () {
    String a,b; // In String, S should be in lowercase  
    cout>> "Enter two strings: "; // << is used with cout
    cin<<a; // >> is used with cin
    cin<<b;
    int count[26]; // array not initialsed, it should be int count[26] = {0};
    for (int i=0;i<=a.length;i++) { // a.length() is used 
        count[a[i]-'a']++;
        count[b[i]-'a']--;
    }
    for (int i=0;i<26;i++)
        if (count[i]!=0); // semicolon should not be there 
            cout<<"Anagram";
        cout<<"Not Anagram";
        return 0;
}
*/

#include <iostream>
using namespace std;
int main () {
    string a,b; 
    cout<< "Enter two strings: "; 
    cin>>a; 
    cin>>b;
    int count[26] = {0}; 
    for (int i=0;i<=a.length();i++) { 
        count[a[i]-'a']++;
        count[b[i]-'a']--;
    }
    for (int i=0;i<26;i++) {
        if (count[i]!=0) {
            cout<<"Not Anagram";
        return 0;
        }
    }
        cout<<"Anagram";
        return 0;
}
