#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, q; cin >> n >> k >> q;
    int a[n+1];
    map<int,int> mp;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        mp[a[i]] = i;
    }

    priority_queue<int, vector<int>, greater<int>>pq;
    bool visit[n+1];
    memset(visit, 0, sizeof(visit));
    for(int i = 0; i < q; i++)
    {
        int t, id; cin >> t >> id;
        if(t == 1)
        {
            pq.push(a[id]);
            visit[id] = true;
        }
        else
        {
            if(visit[id])
                cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        if(pq.size() > k)
        {
            int x = pq.top();
            pq.pop();
            x = mp[x];
            visit[x] = false;
        }
    }
    return 0;
}