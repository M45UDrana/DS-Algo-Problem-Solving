#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<string, int> psi;

#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define input freopen("input.txt","r",stdin)
#define output freopen("output.txt","w",stdout)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0)
#define mem(a, b) memset(a,b,sizeof(a))

int main()
{
    int T; cin >> T;
    while(T--)
    {
        string s; cin >> s;
        int cnt0 = 0, cnt1 = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '0')
                cnt0++;
            if(s[i] == '1')
                cnt1++;
        }
        int n = s.size();
        if(s[0] == '0' or s[n-1] == '0')
           cnt0--;
        if(s[0] == '1' or s[n-1] == '1')
          cnt1--;
         cout  << min(cnt0, cnt1) << endl;
    }
    return 0;
}