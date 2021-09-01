#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    int t; cin >> t;
    map<string, int> mp;
    char c; string s;
    while(t--)
    {
        cin >> c >> s;
        int n = s.size();
        for(int i = 0; i < n; i++)
        {
            if(s[i]%2)
                s[i] = '1';
            else s[i] = '0';
        }
        string g(19-n, '0');
        g += s;
        if(c == '+')
            mp[g]++;
        else if(c == '-')
            mp[g]--;
        else cout << mp[g] << endl;
    }
    return 0;
}