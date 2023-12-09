#include <iostream>
using namespace std;

class SampleClass {
   private:
    int data;

   public:
    // a. No-argument constructor
    SampleClass() {
        cout << "No-argument constructor called" << endl;
        data = 0;
    }

    // b. One-argument constructor
    SampleClass(int value) {
        cout << "One-argument constructor called" << endl;
        data = value;
    }

    // c. Two-argument constructor
    SampleClass(int value1, int value2) {
        cout << "Two-argument constructor called" << endl;
        data = value1 + value2;
    }

    // d. Copy constructor
    SampleClass(const SampleClass &other) {
        cout << "Copy constructor called" << endl;
        data = other.data;
    }

    // e. Dynamic constructor
    SampleClass(int *array, int size) {
        cout << "Dynamic constructor called" << endl;
        data = 0;
        for (int i = 0; i < size; ++i) {
            data += array[i];
        }
    }

    // Function to display the data member
    void displayData() {
        cout << "Data: " << data << endl;
    }
};

int main() {
    // Testing different constructors
    SampleClass obj1;  // No-argument constructor
    obj1.displayData();

    SampleClass obj2(42);  // One-argument constructor
    obj2.displayData();

    SampleClass obj3(10, 20);  // Two-argument constructor
    obj3.displayData();

    SampleClass obj4(obj3);  // Copy constructor
    obj4.displayData();

    int dynamicArray[] = {1, 2, 3, 4, 5};
    SampleClass obj5(dynamicArray, 5);  // Dynamic constructor
    obj5.displayData();

    return 0;
}