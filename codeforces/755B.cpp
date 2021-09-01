#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    set<string>set;
    for(int i = 0; i < n+m; i++)
    {
        string s; cin >> s;
        set.insert(s);
    }
    int dup = (n+m) - (int)set.size();
    n += (dup+1)/2;
    m += dup/2;
    if(n > m)
        cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}