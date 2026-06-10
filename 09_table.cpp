#include <iostream>
using namespace std;

int main() {
    int tn, prod;
    cout << "Enter a number for table generation: ";
    cin >> tn;

    for(int i = 1; i <= 10; ++i) {
        cout << tn << " x " << i << " = " << tn*i << endl;
    }

    return 0;
}