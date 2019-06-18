#include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;

    cout << "Enter operator. (+, -, *, or /):\n\n";
    cin >> op;

    cout << "Enter two operands:\n\n";
    cin >> num1 >> num2;

    switch(op)
    {
        case '+':
            cout << num1 + num2;
            break;
        case '-':
            cout << num1 - num2;
            break;
        case '*':
            cout << num1 * num2;
            break;
        case '/':
            cout << num1 / num2;
            break;
        default:
            cout << 'Error! Operator is incorrect.';
            break;
    }
    return 0;
}