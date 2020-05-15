#include <iostream>
#include <iomanip>
#include "parser.hpp"
#include "euler.hpp"
#include "adams.hpp"
#include <unistd.h>
#include <dlfcn.h>

using namespace std;

int main() {
    void *lib = dlopen("./main.so", RTLD_NOW);
    void *p = dlsym(lib, "parse");
    cout << p << "\n";
}