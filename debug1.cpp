/*#include <iostream>
using namespace std;
int main ()
{
    int n=4;
    for (int i=1;i<=n;i++)
    {
        for (int space = 1;space<=n-i;space++); // semicolon should not be there 
        {
            cout<<""; // it should be cout<<" "
        }
        for (int j=1;j<=i;j++)
        {
            cout<<j;
        }
            for (int j==i;j>=1;j--) // single = will come for initialzing
        {
            cout << j;
        }
        cout<<"endl"; // endl should be there, not in ""
    }
}
*/
#include <iostream>
using namespace std;
int main ()
{
    int n=4;
    for (int i=1;i<=n;i++)
    {
        for (int space = 1;space<=n-i;space++)
        {
            cout<<" ";
        }
        for (int j=1;j<=i;j++)
        {
            cout<<j;
        }
            for (int j=i;j>=1;j--)
        {
            cout << j;
        }
        cout<<endl;
    }
}

