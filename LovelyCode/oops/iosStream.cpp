#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    friend istream &operator>>(istream &, Complex &);
    friend ostream &operator<<(ostream &, Complex &);
};
istream &operator>>(istream &din, Complex &ob)
{
    cout << "Enter the two Numbers:- ";
    cin >> ob.a >> ob.b;
    return din;
}
ostream &operator<<(ostream &dout, Complex &ob)
{
    cout << "Your numbers are: ";
    cout << "a=" << ob.a << "\nb=" << ob.b;
    return dout;
}
int main()
{
    Complex c1;
    cin >> c1;
    cout << c1;
    return 0;
}