#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin >> s;
    int k; cin >> k;
    for(int i = 0; i < k; i++)
        s += "?";
    int n = s.size();
    int ans = k;
    for(int i = 1, j, l; i < n; i++)
    {
        for(j = 0; j < i; j++)
        {
            bool ok = true;
            for(l = 0; l+j < i; l++)
            {
                if(l+i >= n or (s[l+j] != s[l+i] and s[l+i] != '?'))
                {
                    ok = false;
                    break;
                }
            }
            if(ok)
                ans = max(ans, (i-j)*2);
        }
    }
    cout << ans << endl;
    return 0;
}