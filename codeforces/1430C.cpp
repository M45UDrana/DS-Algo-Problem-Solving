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
        if(n == 2)
        {
            cout << 2 << endl;
            cout << 1 << " " << 2 << endl;
            continue;
        }
        priority_queue<int> q;
        for(int i = 1; i < n; i++)
            q.push(i);
        int ans = n;
        vector<pair<int,int> > v;
        while(!q.empty())
        {
            int x = q.top();
            q.pop();
            if((x+ans)%2)
            {
                int y = x;
                x = q.top();
                q.pop();
                q.push(y);
            }
            v.pb(mp(ans,x));
            ans = (ans+x)/2;
        }
        cout << ans << endl;
        for(int i = 0; i < v.size(); i++)
            cout << v[i].first << " " << v[i].second << endl;
    }
    return 0;
}