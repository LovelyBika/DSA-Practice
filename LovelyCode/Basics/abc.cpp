#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
double myPow(double a, int n)
{
    if (n == 0)
    {

        return 1;
    }
    else if (n < 0)
        return 1 / a * myPow(a, --n);
    else
        return a * myPow(a, --n);
}

int main()
{
    double A = 2.06, N = 10;

    cout << myPow(A, N);

    return 0;
}