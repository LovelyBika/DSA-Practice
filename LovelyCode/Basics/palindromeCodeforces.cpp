#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string st;
    cin >> t;
    while (t--)
    {
        cin >> st;
        st = st.substr(0, st.size() / 2);
        int k = unique(st.begin(), st.end()) - st.begin();
        cout << (k == 1 ? "NO" : "yes") << "\n";
    }
    return 0;
}