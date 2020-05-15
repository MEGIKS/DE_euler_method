#include <iostream>
#include <iomanip>
#include "parser.hpp"
#include "euler.hpp"
#include "adams.hpp"
#include <unistd.h>
#include <dlfcn.h>

using namespace std;

int main() {
    func_t f = parse("exp(x)");
    double y[10];
    euler(f, 10, 0.2, 0, 0, y);
    for (auto x : y) {
        cout << x << " ";
    }
    cout << "\n";
}