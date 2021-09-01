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
        int n, k; cin >> n >> k;
        string s; cin >> s;
        bool ok = true;
        for(int i = k; i < n; i++)
        {
            if(s[i] == s[i-k])
                continue;
            else if(s[i] == '?')
                s[i] = s[i-k];
            else if(s[i-k] == '?')
                s[i-k] = s[i];
            else ok = false;
        }

        int c0 = 0, c1 = 0, c_ = 0;
        for(int l = 0, r = 0; r < n; r++)
        {
            if(s[r] == '0')
                c0++;
            else if(s[r] == '1')
                c1++;
            else c_++;

            if(r - l == k)
            {
                if(s[l] == '0')
                    c0--;
                else if(s[l] == '1')
                    c1--;
                else c_--;
               l++;

            }
            if(r-l == k-1)
            {
                if(c0 > k/2 or c1 > k/2)
                    ok = false;
            }
        }
        if(ok)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}