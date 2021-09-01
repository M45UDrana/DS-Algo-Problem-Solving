#include <bits/stdc++.h>

using namespace std;
typedef pair<int,int> pii;

#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'

int main()
{
    int n; cin >> n;
    priority_queue<pii> pq;
    queue<pii> st;
    for(int i = 1; i <= n; i++)
    {
        int x; cin >> x;
        if(i != 1)
            pq.push(mp(x,i));
        else st.push(mp(x,i));
    }
    vector<pii> ans;
    while(!st.empty())
    {
        pii x = st.front(); st.pop();
        while(x.ff-- and !pq.empty())
        {
            pii y = pq.top(); pq.pop();
            ans.pb(mp(x.ss,y.ss));
            st.push(y);
        }
    }
    if(!pq.empty())
        cout << -1 << endl;
    else 
    {
        cout << ans.size() << endl;
        for(int i = 0; i < ans.size(); i++)
            cout << ans[i].ff<< " " << ans[i].ss << endl;
    }
    return 0;
}