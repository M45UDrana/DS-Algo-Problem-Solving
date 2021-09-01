#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    set<int> s[4];  
    for(int i = 0, x; i < n; i++)
    {
        cin >> x;
        s[x].insert(a[i]);
    } 
    for(int i = 0, x; i < n; i++)
    {
        cin >> x;
        s[x].insert(a[i]);
    }
    int m; cin >> m;
    for(int i = 0, x; i < m; i++)
    {
        cin >> x;
        if(!s[x].empty())
        {
            int it = *(s[x].begin());
            cout << it << " ";
            s[1].erase(it);
            s[2].erase(it);
            s[3].erase(it);
        }
        else cout << -1 << " ";
    }
    cout << endl;
    return 0;
}