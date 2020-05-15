#include "euler.hpp"

void euler(func_t f, int n, double h, double x0, double y0, double *ans) {
    ans[0] = y0;
    double x = x0, y = y0;

    for (int i = 1; i < n; ++i) {
        y += h * f(x, y);
        x += h;
        ans[i] = y;
    }
}

