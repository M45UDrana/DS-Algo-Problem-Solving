#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<string, int> psi;

#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c,d) cout<<a<<' '<<b<<' '<<c<<' '<<d<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);

int main()
{
    int n; cin >> n;
    string s; cin >> s;
    int mx_cnt = 0;
    string ans;
    for(char c1 = 'A'; c1 <= 'Z'; c1++)
    {
        for(char c2 = 'A'; c2 <= 'Z'; c2++)
        {
            int cnt = 0;
            for(int i = 0; i < n-1; i++)
            {
                if(s[i] == c1 and s[i+1] == c2)
                    cnt++;
            }
            if(cnt >= mx_cnt)
            {
                mx_cnt = cnt;
                ans = "";
                ans += c1; ans += c2;
            }
        }
    }
    cout << ans << endl;
    return 0;
}