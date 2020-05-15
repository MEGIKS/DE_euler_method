#ifndef MODIFICATE_EULER_HPP
#define MODIFICATE_EULER_HPP
#include "parser.hpp"

const double TWO = 2.0;

extern "C" {
    void modificate_euler(func_t f, int accur, int n, double h, double x0, double y0, double *ans_x, double *ans_y);
}

#endif 