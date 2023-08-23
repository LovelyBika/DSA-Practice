vector<int> sortedArray(vector<int> a, vector<int> b)
{
    // Write your code here
    set<int> s;
    for (int i = 0; i < a.size(); i++)
    {
        s.insert(a[i]);
    }
    for (int i = 0; i < b.size(); i++)
    {
        s.insert(b[i]);
    }
    vector<int> v;
    for (auto a : s)
    {
        v.push_back(a);
    }
    return v;
}