// Interface for the first parent class
interface Animal {
    void eat();
}

// Interface for the second parent class
interface Vehicle {
    void drive();
}

// Concrete class implementing both interfaces (Multiple Inheritance)
class Car implements Animal, Vehicle {
    @Override
    public void eat() {
        System.out.println("Car is eating fuel.");
    }

    @Override
    public void drive() {
        System.out.println("Car is being driven.");
    }

    void honk() {
        System.out.println("Honk! Honk!");
    }
}

public class q9_multipleinherit {
    public static void main(String[] args) {
        // Create an object of the class implementing multiple interfaces
        Car myCar = new Car();

        // Call methods from both interfaces and the class
        myCar.eat(); // From Animal interface
        myCar.drive(); // From Vehicle interface
        myCar.honk(); // From the Car class
    }
}
