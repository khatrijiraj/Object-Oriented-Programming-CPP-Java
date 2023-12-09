#include <iostream>

class Complex {
   private:
    double real;
    double imaginary;

   public:
    // Constructor
    Complex(double r = 0.0, double i = 0.0) : real(r), imaginary(i) {}

    // Member function to display complex number
    void display() const {
        std::cout << real << " + " << imaginary << "i";
    }

    // Operator overloading using a member function
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    // Operator overloading using a friend function
    friend Complex operator-(const Complex& c1, const Complex& c2);

    // Getter functions
    double getReal() const {
        return real;
    }

    double getImaginary() const {
        return imaginary;
    }
};

// Operator overloading using a friend function
Complex operator-(const Complex& c1, const Complex& c2) {
    return Complex(c1.real - c2.real, c1.imaginary - c2.imaginary);
}

int main() {
    Complex num1(3.0, 4.0);
    Complex num2(1.5, 2.5);

    // Using the overloaded + operator with a member function
    Complex sum1 = num1 + num2;
    std::cout << "Sum using member function: ";
    sum1.display();
    std::cout << std::endl;

    // Using the overloaded - operator with a friend function
    Complex diff = num1 - num2;
    std::cout << "Difference using friend function: ";
    diff.display();
    std::cout << std::endl;

    return 0;
}
