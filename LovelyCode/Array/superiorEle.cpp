vector<int> superiorElements(vector<int> &a)
{
    /*  this is OPtimal solution of Finding the superior Element
         as I have to find the Greatest element by comparing to the right Side so I optimise the
         nested loop to one loop by comparing the elements from the right side and return the element
    */
    vector<int> ans;
    int s = a.size();
    int max = a[s - 1];
    ans.push_back(max);
    for (int i = s - 2; i >= 0; i--)
    {
        if (a[i] > max)
        {
            ans.push_back(a[i]);
            max = a[i];
        }
    }
    return ans;
}