#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin >> s;
    int n = s.size();
    int q; cin >> q;
    while(q--)
    {
        int l, r, k;
        cin >> l >> r >> k;
        int m = r+1-l;
        l--;
        k %= m;
        vector<char>g(m);
        for(int i = 0; i < m; i++)
        {
            g[(i+k)%m] = s[l+i];
        }
        for(int i = 0; i < m; i++)
            s[l+i] = g[i];
    }
    cout << s << endl;
    return 0;
}