#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main()
{
    int n; cin >> n;
    string s, t; cin >> s >> t;
    vector<int>v;
    for(int i = 0; i < n; i++)
        if(s[i] != t[i])
            v.push_back(i);
    if(v.size()%2)
    {
        cout << -1 << endl;
        return 0;
    }
    vector<pair<int,int>>ans;
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] != -1)
        {
            for(int j = i+1; j < v.size(); j++)
            {
                if(v[j] != -1 && s[v[i]] == s[v[j]])
                {
                    swap(t[v[i]], s[v[j]]);
                    ans.push_back(make_pair(v[i]+1, v[j]+1));
                    v[i] = -1;
                    v[j] = -1;
                    break;
                }
            }
        }
    }
    int a = -1, b = -1;
    if(s != t)
    {
        for(int i = 0; i < v.size(); i++)
        {
            if(v[i] != -1 && a == -1)
                a = v[i];
            else if(v[i] != -1)
                b = v[i];
        }
        swap(s[a], t[a]);
        swap(s[a], t[b]);
        ans.push_back(make_pair(a+1, a+1));
        ans.push_back(make_pair(a+1, b+1));
    }
    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++)
        cout << ans[i].first << " " << ans[i].second << endl;
    return 0;
}