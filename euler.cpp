#include "euler.hpp"

void euler(func_t f, int n, double h, double x0, double y0, double *ans_x, double *ans_y) {
    ans_x[0] = x0;
    ans_y[0] = y0;
    double x = x0, y = y0;

    for (int i = 1; i < n; ++i) {
        y += h * f(x, y);
        x += h;
        ans_x[i] = x;
        ans_y[i] = y;
    }
}

