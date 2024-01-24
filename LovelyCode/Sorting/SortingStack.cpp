#include <bits/stdc++.h>
using namespace std;
void insert(stack<int> &vc, int temp)
{
    if (vc.empty() || temp >= vc.top())
    {
        vc.push(temp);
        return;
    }
    int val = vc.top();
    vc.pop();
    insert(vc, temp);
    vc.push(val);
}
void sortingStack(stack<int> &vc)
{

    if (vc.empty())
    {
        return;
    }

    int temp = vc.top();
    vc.pop();
    sortingStack(vc);
    insert(vc, temp);
}

int main()
{
    stack<int> st;
    st.push(4);
    st.push(2);
    st.push(3);
    st.push(1);
    st.push(9);

    sortingStack(st);
    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }
    return 0;
}