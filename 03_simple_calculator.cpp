#include <iostream>
#include <string>
#include <format>
using namespace std;

int main() {
    int n1, n2;
    cout << "==========Simple Calculator Program==========" << endl;

    cout << "Enter number 1: ";
    cin >> n1;
    cout << "Enter number 2: ";
    cin >> n2;

    string addition_s = format("{} + {} = {}", n1, n2, n1 + n2);
    string subtraction_s = format("{} - {} = {}", n1, n2, n1 - n2);
    string multiplication_s = format("{} x {} = {}", n1, n2, n1 * n2);
    string division_s = format("{} / {} = {}", n1, n2, n1 / n2);

    cout << addition_s << endl;
    cout << subtraction_s << endl;
    cout << multiplication_s << endl;
    cout << division_s << endl;

    return 0;
}