#include <iostream>
using namespace std;

void swapbyreference(int &num1, int &num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

void swapbyvalue(int num1, int num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main() {
    int num1, num2;
    int choice;
    cout << "Program to implement Call by Value and Call by Reference in C++" << endl;
    cout << "+-------------------------------------+" << endl;
    cout << "|   Call by Value or Reference        |" << endl;
    cout << "+-------------------------------------+" << endl;
    cout << "|1. Swap using call by value          |" << endl;
    cout << "|2. Swap using call by reference      |" << endl;
    cout << "+-------------------------------------+" << endl;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << "Enter your choice: ";
    cin >> choice;
    if (choice == 1) {
        cout << "Before:\nNum1: " << num1 << "\nNum2: " << num2 << endl;
        swapbyvalue(num1, num2);
        cout << "After:\nNum1: " << num1 << "\nNum2: " << num2 << endl;
    } else {
        cout << "Before:\nNum1: " << num1 << "\nNum2: " << num2 << endl;
        swapbyreference(num1, num2);
        cout << "After:\nNum1: " << num1 << "\nNum2: " << num2 << endl;
        return 0;
    }
}