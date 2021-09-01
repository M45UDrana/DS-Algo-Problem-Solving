#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    vector<pair<int,string> > v[m+1];
    for(int i = 0; i < n; i++)
    {
        string s; cin >> s;
        int in, scr; cin >> in >> scr;
        v[in].push_back(make_pair(scr, s));
    }
    for(int i = 1; i <= m; i++)
    {
        sort(v[i].begin(), v[i].end(), greater<pair<int,string> >());
        if((int)v[i].size() == 2)
            cout << v[i][0].second << " " << v[i][1].second << endl;
        else if((int) v[i].size() > 2)
        {
            if(v[i][1].first != v[i][2].first)
                cout << v[i][0].second << " " << v[i][1].second << endl;
            else cout << "?" << endl;
        }
    }
    return 0;
}