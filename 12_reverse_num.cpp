#include <iostream>
using namespace std;

int main() {
    int num, reverse_num = 0;

    cout << "Enter a number to reverse it: ";
    cin >> num;

    while(num > 0) {
        reverse_num = (reverse_num * 10) + (num % 10);
        num /= 10;
    }

    cout << "The reverse is: " << reverse_num;

    return 0;
}