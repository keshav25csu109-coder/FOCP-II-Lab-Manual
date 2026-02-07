#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;
    if (a == 0) {
        cout << "This is not a quadratic equation." << endl;
        return 0;
    }
    double d = b*b - 4*a*c;
    if (d > 0) {
        double root1 = (-b + sqrt(d)) / (2*a);
        double root2 = (-b - sqrt(d)) / (2*a);
        cout << "Roots are real and distinct" << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    } else if (d == 0) {
        double root = -b / (2*a);
        cout << "Roots are real and same" << endl;
        cout << "Root = " << root << endl;
    } else {
        cout << "Roots are complex" << endl;
    }
    return 0;
}