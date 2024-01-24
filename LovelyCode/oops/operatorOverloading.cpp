#include <bits/stdc++.h>
using namespace std;
class Complex
{
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void showData()
    {
        cout << "a=" << a << endl;
        cout << "b=" << b << endl;
    }
    // Complex operator*(Complex c)  //Binary Operating Overloading
    // {
    //  Complex c3;
    //  c3.a=a+c.a;
    //  c3.b=b+c.b;
    //  return c3;
    // }
    friend Complex operator+(Complex, Complex);
    friend Complex operator-(Complex);
    // Complex operator-()
    // {
    //     Complex c3;
    //     c3.a = -a;
    //     c3.b = -b;
    //     return c3;
    // }
};
Complex operator+(Complex c1, Complex c2)
{
    Complex c3;
    c3.a = c1.a + c2.a;
    c3.b = c1.b + c2.b;
    return c3;
}
Complex operator-(Complex ob)
{
    Complex c3;
    c3.a = -ob.a;
    c3.b = -ob.b;
    return c3;
}
int main()
{
    Complex c1, c2, c3;
    c1.setData(1, 5);
    c2.setData(4, 5);
    c3 = -c1;
    c3.showData();
    return 0;
}