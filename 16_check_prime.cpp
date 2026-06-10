#include <iostream>
using namespace std;

int main() {
    int num;
    bool flag = true;      // Not prime

    cout << "Enter a number to check if it is prime or not: ";
    cin >> num;

    if(num == 1) cout << "1";

    for(int i = 2; i < num / 2; ++i) {
        if(num % i == 0) {
            flag  = false;
            break;
        }
    }

    if(flag) cout << "The number is prime!";
    else cout << "The number is not prime!";

    return 0;
}