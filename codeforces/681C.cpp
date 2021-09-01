#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0);
    int n; cin >> n;
    vector<pair<string,int> > v;
    priority_queue<int,vector<int>,greater<int>> q;
    for(int i = 0; i < n; i++)
    {
        string s; cin >> s;
        if(s == "insert")
        {
            int x; cin >> x;
            v.push_back(make_pair(s,x));
            q.push(x);
        }
        else if(s == "getMin")
        {
            int x, y = 1e9+7; cin >> x;
            if(!q.empty())
                y = q.top();
            while(y < x and !q.empty())
            {
                v.push_back(make_pair("removeMin",0));
                q.pop();
                if(!q.empty())
                    y = q.top();
            }
            if(y != x)
            {
                v.push_back(make_pair("insert",x));
                q.push(x);
            }
            v.push_back(make_pair(s,x));
        }
        else
        {
            if(q.empty())
                v.push_back(make_pair("insert",1));
            else q.pop();
            v.push_back(make_pair("removeMin",1));
        }
    }
    cout << v.size() << endl;
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i].first;
        if(v[i].first != "removeMin")
            cout << " " << v[i].second;
        cout << '\n';
    }

    return 0;
}