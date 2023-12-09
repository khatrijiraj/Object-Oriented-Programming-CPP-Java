// Base class
class Shape {
    void draw() {
        System.out.println("Drawing a shape");
    }
}

// Derived class inheriting from Shape
class Circle extends Shape {
    @Override
    void draw() {
        System.out.println("Drawing a circle");
    }
}

// Derived class inheriting from Shape
class Rectangle extends Shape {
    @Override
    void draw() {
        System.out.println("Drawing a rectangle");
    }
}

public class q11polymorphism {
    // Compile-time polymorphism (method overloading)
    static void display(String message) {
        System.out.println("Displaying: " + message);
    }

    static void display(String message, int count) {
        for (int i = 0; i < count; i++) {
            System.out.println("Displaying: " + message);
        }
    }

    public static void main(String[] args) {
        // Runtime polymorphism (method overriding)
        Shape shape1 = new Circle();
        Shape shape2 = new Rectangle();

        // Call overridden methods
        shape1.draw(); // Calls draw() from Circle class
        shape2.draw(); // Calls draw() from Rectangle class

        // Compile-time polymorphism (method overloading)
        display("Hello");
        display("Java", 3);
    }
}
