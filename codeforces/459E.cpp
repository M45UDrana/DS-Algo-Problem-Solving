#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define d(a, b, c) cout<<a<<" "<<b<<" "<<c<<endl;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0);
    int n, m; cin >> n >> m;
    int u[m+1], v[m+1];
    vector<pair<int,int> > w;

    for(int i = 0, x, y, z; i < m; i++)
    {
        cin >> x >> y >> z;
        u[i] = x;
        v[i] = y;
        w.push_back(make_pair(z, i));
    }
    sort(w.begin(), w.end());

    vector<int>state(n+1, 0), pre_ste(n+1, 0);
    state[u[w[0].second]] = pre_ste[u[w[0].second]] = 0;
    state[v[w[0].second]] = pre_ste[v[w[0].second]] = 1;

    vector<pair<int, int> >equal_st;
    int ans = 1;
    for(int i = 1; i < m; i++)
    {
        if(w[i].first == w[i-1].first)
        {
                state[v[w[i].second]] = max(state[v[w[i].second]], pre_ste[u[w[i].second]]+1);
                equal_st.push_back(make_pair(v[w[i].second], state[v[w[i].second]]));
        }
        else
        {
            for(int j = 0; i < equal_st.size(); i++)
            {
                state[equal_st[i].first] = max(state[equal_st[i].first], equal_st[i].second);
            }
            equal_st.clear();
            state[v[w[i].second]] = max(state[v[w[i].second]], state[u[w[i].second]]+1);
            ans = max(ans, state[v[w[i].second]]);
            pre_ste[v[w[i].second]] = state[v[w[i].second]];
        }
    }
    cout << ans << endl;

    return 0;
}