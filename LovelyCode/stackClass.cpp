#include <iostream>
using namespace std;
class stack
{

public:
    int size;
    int *ar;
    int i;

    stack(int capacity)
    {
        this->size = capacity;
        ar = new int[capacity];
        i = -1;
    }

    void push(int num)
    {
        if (!isFull())
            ar[++i] = num;
    }
    int pop()
    {
        if (isEmpty())
            return -1;
        int val = ar[i];
        --i;
        return val;
    }
    int top()
    {
        if (isEmpty())
            return -1;
        return ar[i];
    }
    int isEmpty()
    {
        if (i == -1)
            return 1;
        else
            return 0;
    }

    int isFull()
    {
        if (i == size - 1)
            return 1;
        else
            return 0;
    }
};
int main()
{

    cout << "Enter the size of stack\n";
    int capacity;
    cin >> capacity;

    stack ob(capacity);
    cout << "entter the test case\n";
    int t;
    cin >> t;
    while (t--)
    {
        cout << "Enter the no for performing your operation \n 1)push \n 2)pop \n 3)top\n";
        cout << " 4)isEmpty \n 5)isFulll\n ";
        int num;
        cin >> num;
        switch (num)
        {
        case 1:
            int ele;
            cin >> ele;
            ob.push(ele);
            break;
        case 2:
            cout << "your ans: " << ob.pop() << "\n";
            break;
        case 3:
            cout << "your ans: " << ob.top() << "\n";
            break;
        case 4:
            cout << "your ans: " << ob.isEmpty() << "\n";
            break;
        case 5:
            cout << "your ans: " << ob.isFull() << "\n";
            break;
        default:
            cout << "Invalid input";
            break;
        }
    }
}