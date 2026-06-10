#include <iostream>
using namespace std;

int main() {
    int num, original_num, reverse_num;
    
    cout << "Enter number: ";
    cin >> num;

    original_num = num;

    while(num > 0) {
        reverse_num = (reverse_num * 10) + (num % 10);
        num /= 10;
    }

    if(reverse_num == original_num) cout << "Palindrome!";
    else cout << "Not palindrome!";

    return 0;
}