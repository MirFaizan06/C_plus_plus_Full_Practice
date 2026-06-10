#include <iostream>
#include <format>
#include <string>
using namespace std;

int main() {
    string name = "Faizan";
    string greet = format("Hello World, {}", name);

    return 0;
}