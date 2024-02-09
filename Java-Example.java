import java.util.Scanner; // Import the Scanner class to read input

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in); // Create a Scanner object for reading input
        
        // This reads an integer from the console input
        int x = scanner.nextInt();
        
        // This adds 5 to x if x is divisible by 3 and x is positive
        if (x % 3 == 0 && x > 0) {
            x += 5;
        }
        
        // This prints x to the console
        System.out.println(x);
        
        scanner.close(); // It's a good practice to close the scanner object
    }
}