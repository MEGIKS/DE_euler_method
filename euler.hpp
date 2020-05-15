#ifndef EULER_HPP
#define EULER_HPP
#include "parser.hpp"

extern "C" {
    void euler(func_t f, int n, double h, double x0, double y0, double *ans);
}
#endif 