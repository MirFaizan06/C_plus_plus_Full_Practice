#include <iostream>
using namespace std;

int main() {
    int num, sum;

    cout << "Enter a number: ";
    cin >> num;

    while(num > 0) {
        sum += num % 10;
        num /= 10;
    }

    cout << "The sum is: " << sum;
    return 0;
}