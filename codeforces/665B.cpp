#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, k; cin >> n >> m >> k;
    vector<int>v;
    for(int i = 0,x; i < k; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    stack<int> S;
    for(int i = k-1; i >= 0; i--)
        S.push(v[i]);
    v.clear();
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0,x; j < m; j++)
        {
            cin >> x;
            while(x != S.top())
            {
                v.push_back(S.top());
                S.pop();
                ans++;
            }
            S.pop();
            for(int i = v.size()-1; i >= 0; i--)
                S.push(v[i]);
            v.clear();
            S.push(x);
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}