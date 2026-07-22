import java.util.Scanner;

public class CurrencyConverter {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        double amount, result;

        System.out.println("Currency Converter");
        System.out.println("1. INR to USD");
        System.out.println("2. USD to INR");

        System.out.print("Enter your choice: ");
        int choice = sc.nextInt();

        System.out.print("Enter the amount: ");
        amount = sc.nextDouble();

        if (choice == 1) {
            result = amount / 86;
            System.out.println("USD = " + result);
        }
        else if (choice == 2) {
            result = amount * 86;
            System.out.println("INR = " + result);
        }
        else {
            System.out.println("Invalid Choice");
        }

        sc.close();
    }
}
