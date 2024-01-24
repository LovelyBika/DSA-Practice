#include <iostream>
using namespace std;
class A
{
public:
    virtual void F() // Vitual Function Help to achieve OverRinding
    {
        cout << "class A";
    }
};
class B : public A
{
public:
    void F()
    {
        cout << "class B";
    }
};
int main()
{
    A *p; // Dyanmic Binding Creates Overrinding Problem That is solved By Virtual Keyword
    B o2;
    p = &o2; /// Virtual keyword foucs on Content rather than its return Type
    p->F();  // error
    return 0;
}