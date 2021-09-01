#include <bits/stdc++.h>

using namespace std;

int check(string g, char a, char b)
{
    for(int i = 0; i < g.size(); i++)
    {
        if(g[i] != a and g[i] != b)
            return 0;
    }
    return (int)g.size();
}
int main()
{
    int n; cin >> n;
    string s[n];
    for(int i = 0; i < n; i++)
        cin >> s[i];
    int ans = 0;
    for(char c1 = 'a'; c1 <= 'z'; c1++)
    {
        for(char c2 = 'a'; c2 <= 'z'; c2++)
        {
            int cnt = 0;
            for(int i = 0; i < n; i++)
            {
                cnt += check(s[i], c1, c2);
            }
            ans = max(ans, cnt);
        }
    }
    cout << ans << endl;
    return 0;
}