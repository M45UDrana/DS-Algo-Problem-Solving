#include <iostream>
#include <map>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0);
    int n, m; cin >> n >> m;
    long long dis = 0;
    map<int,int>used_mp;
    queue<int>q;
    vector<int>ans;
    for(int i = 0; i < n; i++)
    {
        int tmp; cin >> tmp;
        q.push(tmp);
        used_mp[tmp] = 1;
    }
    while(!q.empty())
    {
        int cur = q.front(); q.pop();
        if(used_mp[cur+1] == 0)
        {
            used_mp[cur+1] = used_mp[cur]+1;
            q.push(cur+1);
            dis += used_mp[cur];
            ans.push_back(cur+1);
            if(ans.size() == m)
                break;
        }
        if(used_mp[cur-1] == 0)
        {
            used_mp[cur-1] = used_mp[cur]+1;
            q.push(cur-1);
            dis += used_mp[cur];
            ans.push_back(cur-1);
            if(ans.size() == m)
                break;
        }
    }
    cout << dis << endl;
    for(auto &it : ans)
        cout << it << " ";
    cout << endl;
    return 0;
}