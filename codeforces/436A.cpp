#include <bits/stdc++.h>

using namespace std;

#define doublepair pair<int,pair<int,int> >

void printdp(doublepair a)
{
    cout << a.first << " " << a.second.first << " " << a.second.second << endl;
}

int main()
{
    int n, x; cin >> n >> x;
    int sx = x;
    auto cmp = [](doublepair a, doublepair b) 
    {
        if(a.first == b.first)
            return a.second.first < b.second.first;
        else
            return a.first > b.first;
    };
    priority_queue< doublepair, vector<doublepair>,  decltype(cmp) > Q(cmp);
    priority_queue< doublepair, vector<doublepair>,  decltype(cmp) > QQ(cmp);
    for(int i = 0,t,h,m; i < n; i++)
    {
        cin >> t >> h >> m;
        Q.push(make_pair(h, make_pair(m, t)));
        QQ.push(make_pair(h, make_pair(m, t)));
    }
    int ans = 0;
    vector<doublepair>v;
    doublepair p = Q.top();
    int t = 0;
    while(p.first <= x and !Q.empty())
    {
        while((p.second.second != t or p.first > x) and !Q.empty())
        {
            v.push_back(p);
            Q.pop();
            p = Q.top();
        }
        if(p.first <= x and p.second.second == t)
        {
            Q.pop();
            x += p.second.first;
            ans++;
            t = t^1;
        }
        else if(Q.empty())
            break;
        for(int i = 0; i < v.size(); i++)
        {
            Q.push(v[i]);
        }
        v.clear();
        p = Q.top();
    }

    int ans1 = 0;
    v.clear();
    p = QQ.top();
    t = 1;
    while(p.first <= sx and !QQ.empty())
    {
        while((p.second.second != t or p.first > sx) and !QQ.empty())
        {
            v.push_back(p);
            QQ.pop();
            p = QQ.top();
        }
        if(p.first <= sx and p.second.second == t)
        {
            QQ.pop();
            sx += p.second.first;
            ans1++;
            t = t^1;
        }
        else if(QQ.empty())
            break;
        for(int i = 0; i < v.size(); i++)
        {
            QQ.push(v[i]);
        }
        v.clear();
        p = QQ.top();
    }
    cout << max(ans, ans1) << endl;

    return 0;
}