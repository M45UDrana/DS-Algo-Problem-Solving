#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n; 
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        v.push_back(x);
    }
    for(int i = 0; i < n; i++)
        v.push_back(v[i]);

    for(int i = n*2-2, cnt = 1; i > 0; i--)
    {
        if(v[i] <= v[i+1])
            cnt++;
        else cnt = 1;
        if(cnt == n)
            return !(cout << n-i << endl);
    }
    cout << -1 << endl;
    return 0;
}