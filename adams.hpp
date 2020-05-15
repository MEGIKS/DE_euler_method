#ifndef ADAMS_HPP
#define ADAMS_HPP
#include "parser.hpp"

const double LEFT_STEP = 1.5;
const double RIGHT_STEP = 0.5;

void adams(func_t f, int n, double h, double x0, double y0, double *ans_x, double *ans_y);

#endif 