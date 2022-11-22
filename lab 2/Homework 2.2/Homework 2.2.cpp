#include <iostream>


using namespace std;

int f(float n, bool isRoundedTo100 = false) {
    int intreg = floor(n);
    float fract = n - intreg;

    if (isRoundedTo100 == false) {
        if (fract < 0.5) {
            return intreg;
        }
        else {
            return n + 1;
        }
    }
    else {
        int moreThan100 = intreg / 100;
        float remainingNr = intreg % 100 + fract;
        if (remainingNr < 50) {
            return moreThan100 * 100;
        }
        else {
            return moreThan100 * 100 + 100;
        }
    }
}

int main()
{
    cout << f(1.75) << '\n';
    cout << f(1.45) << '\n';
    cout << f(1031.23, true) << '\n';
    cout << f(1053.75, true) << '\n';
}