#include "modificate_euler.hpp"

void modificate_euler(func_t f, int accur, int n, double h, double x0, double y0, double *ans_x, double *ans_y) {
    ans_x[0] = x0;
    ans_y[0] = y0;
    double x = x0, y = y0;

    for (int i = 1; i < n; ++i) {
        double y_past = y;
        double x_past = x;
        double x = x_past + h;
        double f_past = f(x_past, y_past);
        double x_diff = x - x_past;
        double y = y_past + x_diff * f_past;
        for (int j = 1; j <= accur; ++j) {
            y = y_past + (f_past + f(x, y)) / TWO * x_diff;
        }

        ans_x[i] = x;
        ans_y[i] = y;
    }
}

