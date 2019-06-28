import java.util.Scanner;

public class Calculator {
	public static void main(String[] args) {
		
		Scanner input = new Scanner (System.in);

		System.out.println("Select an operator (+, -, /, *): ");
		int operator = input.nextInt();

		System.out.println("Input the first number:\n");
		int num1 = input.nextInt();
		System.out.println("\nInput the second number:\n");
		int num2 = input.nextInt();

		switch (operator) {
			case '+':
				int add = num1 + num2;
				System.out.println("\nSum: " + add);
				break;
			case '-':
				int sub = num1 - num2;
				System.out.println("\nSum: " + sub);
				break;
			case '/':
				int div = num1 / num2;
				System.out.println("\nSum: " + div);
				break;
			case '*':
				int mult = num1 * num2;
				System.out.println("\nSum: " + mult);
				break;
			default:
				System.out.println("Sorry, an error has occurred.");
				break;
		}
	}
}