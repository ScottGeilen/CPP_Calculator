#include <iostream>
using namespace std;

int main() {
    // Create variable for operator
    char op;
    // Create variable for two numbers
    float num1, num2;

    // Ask user to enter an operator they would like to use
    cout << "Enter operator. (+, -, *, or /):\n\n";
    // Store inputted operator in "op" variable
    cin >> op;

    // Ask user to enter two numbers they would like to operate on
    cout << "Enter two operands:\n\n";
    // Store both inputted numbers in num1 variable, and num2 variable respectively
    cin >> num1 >> num2;

    // Choose how to operate on numbers based on the operator chosen by user
    switch(op)
    {
        // If addition, add numbers
        case '+':
            cout << num1 + num2;
            break;
        // If subtraction, subtract numbers
        case '-':
            cout << num1 - num2;
            break;
        // If multiplication, multiply numbers
        case '*':
            cout << num1 * num2;
            break;
        // If division, divide numbers
        case '/':
            cout << num1 / num2;
            break;
        // If no operator is entered above, then pop up error message
        default:
            cout << 'Error! Operator is incorrect.';
            break;
    }
    return 0;
}