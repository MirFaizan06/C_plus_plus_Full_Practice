#include <iostream>
#include <string>
#include <format>
using namespace std;

int main() {
    int n1, n2, temp;
    cout << "Enter number 1: ";
    cin >> n1;
    cout << "Enter number 2: ";
    cin >> n2;

    // cout << "Swapping (using 3 variables)........." << endl;

    // temp = n1;
    // n1 = n2;
    // n2 = temp;

    // cout << "Swapping completed: " << endl;

    // cout << "a: " << n1 << "\t|\t" << "b: " << n2;


    cout << "Swapping (using 2 variables)........." << endl;

    n2 = n2 + n1; // 30
    n1 = n2 - n1; // 20
    n2 = n2 - n1; // 10

    cout << "Swapping completed: " << endl;

    cout << "a: " << n1 << "\t|\t" << "b: " << n2;


    return 0;
}