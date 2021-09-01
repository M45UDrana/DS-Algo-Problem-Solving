#include <bits/stdc++.h>

using namespace std;

const int N = 2e5+7;
vector<int> seq[N], lst;
int sz = 0;

int srch(int x)
{
    int lft = 0, rht = sz;
    while(lft < rht)
    {
        int mid = (lft+rht)/2;
        if(lst[mid] < x)
            rht = mid;
        else lft = mid+1;
    }
    return rht;
}

int main()
{
    int n; cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        int in = srch(x);
        if(in == sz)
        {
            lst.push_back(x);
            seq[in].push_back(x);
            sz++;
        }
        else
        {
            seq[in].push_back(x);
            lst[in] = x;
        }
    }
    for(int i = 0; i < sz; i++)
    {
        for(int j = 0; j < seq[i].size(); j++)
            cout << seq[i][j] << " \n"[j+1==seq[i].size()];
    }
    return 0;
}