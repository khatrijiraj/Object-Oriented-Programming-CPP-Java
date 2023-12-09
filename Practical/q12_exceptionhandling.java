import java.util.Scanner;

public class q12_exceptionhandling {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        try {
            // Code that may throw an exception
            System.out.print("Enter a number: ");
            int numerator = scanner.nextInt();

            System.out.print("Enter a divisor: ");
            int divisor = scanner.nextInt();

            // Division operation that may throw an ArithmeticException
            int result = divideNumbers(numerator, divisor);

            System.out.println("Result of division: " + result);
        } catch (ArithmeticException e) {
            // Handle the specific exception
            System.out.println("Error: " + e.getMessage());
        } catch (Exception e) {
            // Handle a more general exception
            System.out.println("An error occurred: " + e.getMessage());
        } finally {
            // Code that will be executed regardless of whether an exception occurred or not
            System.out.println("Finally block executed");
            scanner.close();
        }

        System.out.println("Program continues after exception handling");
    }

    // Method that may throw an ArithmeticException
    private static int divideNumbers(int numerator, int divisor) {
        return numerator / divisor;
    }
}
