#include <iostream>
#include <format>
#include <string>
using namespace std;

int main() {
    int n1, n2, sum;

    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter 2nd number: ";
    cin >> n2;

    sum = n1 + n2;

    string sum_print = format("The sum of {} & {} is {}.", n1, n2, sum);
    cout << sum_print;

    return 0;
}