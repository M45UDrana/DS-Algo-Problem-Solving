#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<string, int> psi;

#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        int n = s.size(), x; cin >> x;
        vector<char> v[n];
        for(int i = 0; i < n; i++)
        {
            char c = '1';
            if(s[i] == '0')
                c = '0';
            if(i+x < n)
                v[i+x].push_back(c);
            if(i-x >= 0)
                v[i-x].push_back(c);
        }
        string s1 = "", g = "";
        for(int i = 0; i < n; i++)
        {
            sort(v[i].begin(),v[i].end());
            if(v[i].size() > 0)
                s1 += v[i][0];
            else s1 += '0';
        }
        for(int i = 0; i < n; i++)
        {
            if(i+x < n and s1[i+x] == '1')
                g += '1';
            else if(i-x >= 0 and s1[i-x] == '1')
                g += '1';
            else g += '0';
        }
        if(g == s)
            cout << s1 << endl;
        else cout << -1 << endl;
    }
    return 0;
}