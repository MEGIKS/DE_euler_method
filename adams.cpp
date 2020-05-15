#include "adams.hpp"

void adams(func_t f, int n, double h, double x0, double y0, double *ans_x, double *ans_y) {
    ans_x[0] = x0;
    ans_y[0] = y0;
    double x1 = x0 + h, y1 = y0 + h * f(x0, y0);
    ans_x[1] = x1;
    ans_y[1] = y1;
    for (int i = 2; i < n; ++i) {
        double y = y1 + LEFT_STEP * h * f(x1, y1)
            - RIGHT_STEP * h * f(x0, y0);
        double x = x1 + h;
        y0 = y1;
        y1 = y;
        x0 = x1;
        x1 = x;
        ans_x[i] = x;
        ans_y[i] = y;
    }
}

