#include <iostream>
#include <iomanip>
#include "parser.hpp"
#include "euler.hpp"
#include "adams.hpp"
#include "modificate_euler.hpp"

using namespace std;

int main() {
    /*auto f = parse("sin(x) + cos(y)");
    cout << f(0, 3.14 / 2) << "\n";
    f = parse("x + y");
    cout << f(0.4, 0.9) << '\n';
    double arr1[100], arr2[100];

    int n = 10;
    double h = 0.01;
    double x0 = 1.0;
    double y0 = 1.0;
    euler(f, n, h, x0, y0, arr1);
    adams(f, n, h, x0, y0, arr2);

    for (int i = 0; i < n; ++i) {
        cout << arr1[i] << ' ' << arr2[i] << endl;
    }*/

    double xe[100], ye[100], xa[100], ya[100];
    double xm2[100], ym2[100], xm3[100], ym3[100];
    //auto f = parse("sin(x)");
    auto f = parse("sin(x)");
    int n = 10;
    double h = 0.001;
    double x0 = 0;
    double y0 = 0;
    euler(f, n, h, x0, y0, xe, ye);
    adams(f, n, h, x0, y0, xa, ya);
    modificate_euler(f, 1, n, h, x0, y0, xm2, ym2);
    modificate_euler(f, 10, n, h, x0, y0, xm3, ym3);

    for (int i = 0; i < n; ++i) {
        cout << i << ":\n";
        cout << xe[i] << ' ' << ye[i] << '\n';
        cout << xa[i] << ' ' << ya[i] << '\n';
        cout << xm2[i] << ' ' << ym2[i] << '\n';
        cout << xm3[i] << ' ' << ym3[i] << '\n';
    }
}