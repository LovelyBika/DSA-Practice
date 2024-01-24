#include <bits/stdc++.h>
using namespace std;
void insert(vector<int> vc, stack<int> &stack)
{
    int i = 0;
    if (vc.size() - 1 == i)
        return;
    stack.push(vc[i]);
    i++;
    insert(vc, stack);
}

void reverseStack(stack<int> &stack)
{
    vector<int> vc;
    if (stack.empty())
    {
        return;
    }
    int temp = stack.top();
    stack.pop();
    vc.push_back(temp);
    reverseStack(stack);
    insert(vc, stack);
}

int main()
{
    stack<int> st;
    st.push(4);
    st.push(2);
    st.push(3);
    st.push(1);
    st.push(9);

    reverseStack(st);
    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }
    return 0;
}