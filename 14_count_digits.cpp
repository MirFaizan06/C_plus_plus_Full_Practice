#include <iostream>
using namespace std;

int main() {
    int num, occ;

    cout << "Enter a number: ";
    cin >> num;

    if(num == 0) occ = 1;

    while(num != 0) {
        num /= 10;
        occ++;
    }

    cout << "The digits are: " << occ;

    return 0;
}