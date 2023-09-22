/* Develop a calculator program that performs basic arithmetic operations such as addition, subtraction,
multiplication, and division. Allow the user to input two numbers and choose an operation to perform. */

#include <iostream>
using namespace std;

int main()
{
    double a, b;
    cout << "Input two numbers : ";
    cin >> a >> b;

    char op;
    cout << "Input an operator : ";
    cin >> op;

    switch(op)
    {
    case '+':
        cout << a + b << endl;
        break;
    
    case '-':
        cout << a - b << endl;
        break;

    case '*':
        cout << a * b << endl;
        break;

    case '/':
        cout << a / b << endl;
        break;

    default:
        cout << "Invalid";
        break;
    }
    return 0;
}