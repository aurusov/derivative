#include <iostream>
#include <math.h>

void derivative_cos_x()
{
    const double dx = 0.01;
    for (double x = 0; x < 2 * M_PI; x += dx)
    {
        const double cos_x = cos(x);
        const double x2 = x + dx;
        const double cos_x2 = cos(x2);
        const double derivative = (cos_x2 - cos_x) / (x2 - x);
        std::cout
            << "x=" << x
            << ", cos(x)=" << cos_x
            << ", x + dx=" << x2
            << ", cos(x+dx)=" << cos_x2
            << ", derivative=" << derivative
            << std::endl;
    }
}

void derivative_sin_x()
{
    const double dx = 0.01;
    for (double x = 0; x < 2 * M_PI; x += dx)
    {
        const double sin_x = sin(x);
        const double x2 = x + dx;
        const double sin_x2 = sin(x2);
        const double derivative = (sin_x2 - sin_x) / (x2 - x);
        std::cout
            << "x=" << x
            << ", sin(x)=" << sin_x
            << ", x + dx=" << x2
            << ", sin(x+dx)=" << sin_x2
            << ", derivative=" << derivative
            << std::endl;
    }
}

double fun(double x)
{
    return x * x;
}

void derivative_fun()
{
    const double dx = 0.01;
    for (double x1 = -1; x1 <= 1; x1 += dx)
    {
        const double y1 = fun(x1);
        const double x2 = x1 + dx;
        const double y2 = fun(x2);
        const double derivative = (y2 - y1) / (x2 - x1);
        std::cout
            << "x1=" << x1
            << ", y1=" << y1
            << ", x2=" << x2
            << ", y2=" << y2
            << ", derivative=" << derivative
            << std::endl;
    }
}

int main()
{
    derivative_fun();
    return 0;
}
