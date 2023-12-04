#pragma once
#include <iostream>
#include <string>
#include <Funcion.hpp>

using namespace std;

class Interpretador
{
private:
public:
    Interpretador() {}
    string Interpretar(string expresion)
    {
        size_t foundsqrt = expresion.find("raiz");
        while (foundsqrt != string::npos)
        {
            expresion.replace(foundsqrt, 4, "sqrt");
            foundsqrt = expresion.find("raiz", foundsqrt + 4);
        }
        size_t foundpro = expresion.find(")(");
        while (foundpro != string::npos)
        {
            expresion.replace(foundpro, 2, "*");
            foundpro = expresion.find(")(", foundpro + 2);
        }
        size_t foundxi = expresion.find("x(");
        while (foundxi != string::npos)
        {
            expresion.replace(foundxi, 2, "x*(");
            foundxi = expresion.find("x(", foundxi + 2);
        }
        size_t foundxd = expresion.find(")x");
        while (foundxd != string::npos)
        {
            expresion.replace(foundxd, 2, ")*x");
            foundxd = expresion.find(")x", foundxd + 2);
        }

        cout << "La expresion interpretada es: " << expresion << endl;
        return expresion;
    };
    ~Interpretador() {}
};