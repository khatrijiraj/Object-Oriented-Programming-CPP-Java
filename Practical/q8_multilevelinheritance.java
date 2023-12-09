// Base class
class Animal {
    void eat() {
        System.out.println("This animal eats food.");
    }
}

// Intermediate class inheriting from Animal
class Mammal extends Animal {
    void run() {
        System.out.println("This mammal can run.");
    }
}

// Derived class inheriting from Mammal
class Dog extends Mammal {
    void bark() {
        System.out.println("Woof! Woof!");
    }
}

public class q8_multilevelinheritance {
    public static void main(String[] args) {
        // Create an object of the derived class
        Dog myDog = new Dog();

        // Call methods from all levels of inheritance
        myDog.eat(); // From Animal class
        myDog.run(); // From Mammal class
        myDog.bark(); // From Dog class
    }
}
