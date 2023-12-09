// Base class
class Animal {
    void eat() {
        System.out.println("This animal eats food.");
    }
}

// Interface for the first parent class
interface Vehicle {
    void drive();
}

// Intermediate class inheriting from Animal and implementing Vehicle interface
class Mammal extends Animal implements Vehicle {
    @Override
    public void drive() {
        System.out.println("This mammal can run.");
    }
}

// Derived class inheriting from Mammal
class Dog extends Mammal {
    void bark() {
        System.out.println("Woof! Woof!");
    }
}

public class q10_hybridinheritance {
    public static void main(String[] args) {
        // Create an object of the derived class
        Dog myDog = new Dog();

        // Call methods from different levels of inheritance
        myDog.eat(); // From Animal class
        myDog.drive(); // From Vehicle interface
        myDog.bark(); // From Dog class
    }
}
