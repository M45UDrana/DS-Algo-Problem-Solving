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
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        map<int, int>mp;
        int cnt = 0;
        for(int i = 0, x; i < n; i++)
        {
            cin >> x;
            mp[x]++;
        }
        map<int, int>::iterator it;
        for(it = mp.begin(); it != mp.end(); it++)
        {
            if(it->second > 1)
            {
                cnt += (it->second);
                cnt--;
            }
        }
        cout << n - cnt << endl;
    }
    return 0;
}