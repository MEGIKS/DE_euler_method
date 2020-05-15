#include <iostream>
#include <iomanip>
#include "parser.hpp"
#include "euler.hpp"
#include "adams.hpp"

using namespace std;

int main() {
    double xe[100], ye[100];
    auto f = parse("sin(x)");
    euler(f, 10, 0.2, 0.0, 0.0, xe, ye);
    for (int i = 0; i < 10; ++i) {
        cout << xe[i] << ' ' << ye[i] << '\n';
    }
}