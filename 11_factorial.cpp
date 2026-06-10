#include <iostream>
using namespace std;

int main() {
    int n, prod = 1;
    
    cout << "Enter a number to find its factorial: ";
    cin >> n;

    for(int i = 1; i <= n; ++i) prod *= i;

    cout << "The factorial of " << n << " is: " << prod;

    return 0;
}