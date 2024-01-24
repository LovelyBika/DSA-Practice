#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;
int main()
{
    string str("foo");

    try
    {
        str.reserve(2);
        str.at(10);
    }
    catch (const runtime_error &e)
    { // length_error
        cout << e.what() << endl;
    }

    catch (const exception &e)
    { // out_of_range
        cout << e.what() << endl;
    }
    return 0;
}