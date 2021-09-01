#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    set<int> s;
    for(int i = 0; i < n; i++)
    {
        string g; cin >> g;
        int mask = 0;
        for(int j = 0; j < g.size(); j++)
        {
            mask |= (1<<(g[j]-'a'));
        }
        s.insert(mask);
    }
    cout << s.size() << endl;
    return 0;
}