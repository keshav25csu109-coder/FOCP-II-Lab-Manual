#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    int choice;

    do {
        cout << "1 for Addition" << endl;
        cout << "2 for Subtraction" << endl;
        cout << "3 for Multiplication" << endl;
        cout << "4 for Division" << endl;
        cout << "5 for Exit" << endl;
        cout << "Enter the choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
        }
        if (choice == 1) {
            num1 = num1 + num2;
            cout << "Result = " << num1 << endl;
        } 
        else if (choice == 2) {
            num1 = num1 - num2;
            cout << "Result = " << num1 << endl;
        } 
        else if (choice == 3) {
            num1 = num1 * num2;
            cout << "Result = " << num1 << endl;
        } 
        else if (choice == 4) {
            if (num2 != 0) {
                num1 = num1 / num2;
                cout << "Result = " << num1 << endl;
            } else {
                cout << "Division by 0 is not possible" << endl;
            }
        } 
        else if (choice == 5) {
            cout << "" << endl;
        } 
        else {
            cout << "Invalid choice" << endl;
        }
    } while (choice != 5);

    return 0;
}