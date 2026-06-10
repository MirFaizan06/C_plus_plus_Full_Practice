#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    char opr;

    cout << "Enter number 1: ";
    cin >> n1;
    cout << "Enter number 2: ";
    cin >> n2;
    cout << "Enter operator(+ - x /): ";
    cin >> opr;

    switch(opr) {
        case '+':
            cout << "Addition: " << n1 + n2;
            break;
        case '-':
            cout << "Subtraction: " << n1 - n2;
            break;
        case '*':
            cout << "Multiplication: " << n1 * n2;
            break;
        case '/':
            cout << "Division: " << n1 / n2;
            break;
        default:
            cout << "Invalid Operator!";
    }

    return 0;
}