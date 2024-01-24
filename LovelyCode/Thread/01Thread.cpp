#include <iostream>
#include <thread>
using namespace std;
void foo(int x)
{
    cout << "foo with x:" << x << endl;
}
int main()
{
    thread Mythread(foo, 10);
    Mythread.join();
    return 0;
}