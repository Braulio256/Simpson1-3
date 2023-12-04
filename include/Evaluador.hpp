#pragma once
#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
#include "tinyexpr.h"

using namespace std;

class Evaluador
{
private:
    double x, y;

public:
    Evaluador()
    {
    }
    double Evaluar(double x, string expresion)
    {
        const char *expression = expresion.c_str();
        te_variable vars[] = {"x", &x};
        int err;
        te_expr *n = te_compile(expression, vars, 2, &err);
        if (n)
        {
            x = x;
            const double y = te_eval(n);
            return y;
            te_free(n);
        }
        else
        {
            printf("\t%*s^\nError cercano", err - 1, "");
        }
    }
    ~Evaluador() {}
};