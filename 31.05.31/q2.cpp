#include <iostream>
#include <cmath>
using namespace std;

class Complex
{
    double real;
    double imag;

public:
    Complex()
    {
        real = 0;
        imag = 0;
    }
    Complex(double real, double imag)
    {
        this->real = real;
        this->imag = imag;
    }
    Complex operator+(Complex &c)
    {
        Complex sum;
        sum.real = real + c.real;
        sum.imag = imag + c.imag;
        return sum;
    }
    friend ostream &operator<<(ostream &out, Complex &c);
};

class Poly
{
    double a;
    double b;
    double c;

public:
    Poly()
    {
        a = 0;
        b = 0;
        c = 0;
    }
    Poly(double a, double b, double c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    Poly operator+(Poly &p)
    {
        Poly sum;
        sum.a = a + p.a;
        sum.b = b + p.b;
        sum.c = c + p.c;
        return sum;
    }
    // eval function
    double eval(double x)
    {
        return a * x * x + b * x + c;
    }
    // root calculator
    void roots(Complex &c1, Complex &c2)
    {
        double part1 = -b / (2 * a);
        if (b * b - 4 * a * c >= 0)
        {
            double part2 = sqrt(b * b - 4 * a * c) / (2 * a);
            c1 = Complex(part1 + part2, 0);
            c2 = Complex(part1 - part2, 0);
        }
        else
        {
            double part2 = sqrt(4 * a * c - b * b) / (2 * a);
            c1 = Complex(part1, part2);
            c2 = Complex(part1, -part2);
        }
    }
    friend ostream &operator<<(ostream &out, Poly &p);
};

// Complex cout
ostream &operator<<(ostream &out, Complex &c)
{
    if (c.real > 0)
    {
        out << c.real;
    }
    else if (c.real < 0)
    {
        out << "-" << -c.real;
    }
    else
    {
        out << "";
    }
    if (c.imag > 0)
    {
        out << "+" << c.imag << "i";
    }
    else if (c.imag < 0)
    {
        out << "-" << -c.imag << "i";
    }
    else
    {
        out << "";
    }
    return out;
}

// polynomial cout
ostream &operator<<(ostream &out, Poly &p)
{
    if (p.a > 0)
    {
        out << p.a << "x^2";
    }
    else if (p.a < 0)
    {
        out << "-" << -p.a << "x^2";
    }
    else
    {
        out << "";
    }
    if (p.b > 0)
    {
        out << "+" << p.b << "x";
    }
    else if (p.b < 0)
    {
        out << "-" << -p.b << "x";
    }
    else
    {
        out << "";
    }
    if (p.c > 0)
    {
        out << "+" << p.c;
    }
    else if (p.c < 0)
    {
        out << "-" << -p.c;
    }
    else
    {
        out << "";
    }
    return out;
};

int main()
{
    Poly p1(3, 4, -2);
    Poly p2(0, -4, 10);
    Poly p3;
    p3 = p1 + p2;
    cout << p1 << endl;
    cout << p2 << endl;
    cout << p3 << endl;
    Complex c1, c2;
    p3.roots(c1, c2);
    // Testing added functions:
    // Using eval function:
    cout << "Evaluating " << p3 << "at x=2: " << p3.eval(2) << endl;
    // Using root finder:
    cout << "Roots for " << p3 << " are:" << endl;
    cout << c1 << endl;
    cout << c2 << endl;
    return 0;
}
