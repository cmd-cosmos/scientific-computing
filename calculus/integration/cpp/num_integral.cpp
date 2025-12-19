// approximating the integral of x^2 with a limit of 0,1
// usnig the trapezoidal rule to approximate integrals

#include <iostream>
#include <cmath>

double f(double x)
// returns the x^2 function
{
    return x * x;
}

int main()
{
    int steps = 500;
    double a = 0.0;
    double b = 1.0;
    double h = (b - a) / steps;

    double sum = 0.5 * (f(a) + f(b));

    for (int i = 1; i < steps; i++)
    {
        sum += f(a + i * h);
    }

    double integral = sum * h;

    std::cout << "Approximate Integral: " << integral << '\n';

    return 0;
}

