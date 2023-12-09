#include <iostream>
using namespace std;

class ComplexNumber {
   private:
    double real;
    double imaginary;

   public:
    // Constructor to initialize complex number with default values
    ComplexNumber() : real(0.0), imaginary(0.0) {}

    // Function to assign initial values to real and imaginary parts
    void assignInitialValue(double realValue, double imaginaryValue) {
        real = realValue;
        imaginary = imaginaryValue;
    }

    // Function to display complex number in proper format
    void displayComplexNumber() {
        cout << "Complex Number: " << real << " + " << imaginary << "i" << endl;
    }

    // Function to add a real number to the complex number
    void addRealNumber(double realNumber) {
        real += realNumber;
    }

    // Function to subtract a real number from the complex number
    void subtractRealNumber(double realNumber) {
        real -= realNumber;
    }

    // Function to add an imaginary number to the complex number
    void addImaginaryNumber(double imaginaryNumber) {
        imaginary += imaginaryNumber;
    }

    // Function to subtract an imaginary number from the complex number
    void subtractImaginaryNumber(double imaginaryNumber) {
        imaginary -= imaginaryNumber;
    }
};

int main() {
    ComplexNumber complexNum;

    // Assign initial values
    double initialReal, initialImaginary;
    cout << "Enter initial real part: ";
    cin >> initialReal;
    cout << "Enter initial imaginary part: ";
    cin >> initialImaginary;

    complexNum.assignInitialValue(initialReal, initialImaginary);

    // Display initial complex number
    complexNum.displayComplexNumber();

    // Add and subtract a real number
    double realToAdd, realToSubtract;
    cout << "Enter real number to add: ";
    cin >> realToAdd;
    complexNum.addRealNumber(realToAdd);

    cout << "Enter real number to subtract: ";
    cin >> realToSubtract;
    complexNum.subtractRealNumber(realToSubtract);

    // Display updated complex number
    complexNum.displayComplexNumber();

    // Add and subtract an imaginary number
    double imaginaryToAdd, imaginaryToSubtract;
    cout << "Enter imaginary number to add: ";
    cin >> imaginaryToAdd;
    complexNum.addImaginaryNumber(imaginaryToAdd);

    cout << "Enter imaginary number to subtract: ";
    cin >> imaginaryToSubtract;
    complexNum.subtractImaginaryNumber(imaginaryToSubtract);

    // Display final complex number
    complexNum.displayComplexNumber();

    return 0;
}
