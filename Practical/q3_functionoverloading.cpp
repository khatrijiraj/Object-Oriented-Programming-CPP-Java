#include <cmath>
#include <iostream>
using namespace std;

// Function to calculate power when the base is an integer
int power(int m, int n) {
    return pow(m, n);
}

// Function to calculate power when the base is a double
double power(double m, int n) {
    return pow(m, n);
}

int main() {
    int intBase, exponent;
    double doubleBase;

    cout << "Enter an integer base: ";
    cin >> intBase;

    cout << "Enter a double base: ";
    cin >> doubleBase;

    cout << "Enter an exponent: ";
    cin >> exponent;

    // Calculate and display power for integer base
    cout << "Power (integer base): " << power(intBase, exponent) << endl;

    // Calculate and display power for double base
    cout << "Power (double base): " << power(doubleBase, exponent) << endl;

    return 0;
}
