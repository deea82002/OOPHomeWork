#include <iostream>
#include <cmath>
using namespace std;


struct ComplexNumber
{
    double a, b;
};

double module(const ComplexNumber& nr)
{
    return sqrt(pow(nr.a, 2) + pow(nr.b, 2));
}

double module(const double& a, const double& b)
{
    return sqrt(pow(a, 2) + pow(b, 2));
}

int main()
{
    ComplexNumber complexNumber{ 5.2,6.4 };
    double Real = 5.2, Imaginary = 6.4;

    cout << "First function: " << module(complexNumber) << '\n';
    cout << "Second function: " << module(Real, Imaginary) << '\n';

}
