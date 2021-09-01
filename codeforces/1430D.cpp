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
    IO;
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        vector<int> v;
        for(int i = 0, cnt = 0; i < n; i++)
        {
            int j = i+1;
            while(j < n and s[i] == s[j])
                j++;
            v.push_back(j - i);
            i = j-1;
        }
        int m = v.size(), ans = 0;
        for(int i = 0, l = 0; i < m; i++)
        {
            l = max(i, l);
            while(l < m and v[l] < 2)
                l++;
            if(l == m)
            {
                ans += (v.size()+1-i)/2;
                break;
            }
            else 
            {
                v[l]--;
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}