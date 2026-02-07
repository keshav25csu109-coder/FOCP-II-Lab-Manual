#include <iostream>
using namespace std;

int main() {
    int n;
    float number, largest;
    cout << "Numbers do you want to enter? ";
    cin >> n;
    if (n <= 0) {
        cout << "Invalid choice" << endl;
        return 0;
    }
    cout << "Enter number 1: ";
    cin >> number;
    largest = number;
    for (int i = 2; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> number;

        if (number > largest) {
            largest = number; 
        }
    }
    cout << "The largest number is: " << largest << endl;
    return 0;
}