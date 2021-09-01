#include <bits/stdc++.h>

using namespace std;

bool equal(string s1, string s2)
{
    bool ok = true;
    int n1 = (int)s1.size()-1, n2 = (int)s2.size()-1;
    while(n2 >= 0)
    {
        ok &= (s1[n1] == s2[n2]);
        n1--; n2--;
    }
    return ok;
}
int main()
{
    int n; cin >> n;
    map<string, int> mp;
    vector<string> v[n+1];
    int k = 1;
    for(int i = 1; i <= n; i++)
    {
        string s; cin >> s;
        int in;
        if(mp[s])
            in = mp[s];
        else 
        {
            mp[s] = k;
            in = k++;
        }
        int m; cin >> m;
        for(int j = 0; j < m; j++)
        {
            string g; cin >> g;
            v[in].push_back(g);
        }
    }

    for(int i = 1; i < k; i++)
    {
        for(int j = 0; j < v[i].size(); j++)
        {
            for(int l = 0; l < v[i].size(); l++)
            {
                if(v[i][l].size() >= v[i][j].size() and
                    l != j and equal(v[i][l], v[i][j]))
                {
                    v[i][j] = "";
                    break;
                }
            }
        }
    }
    cout << k-1 << endl;
    for(auto &x : mp)
    {
        cout << x.first;
        int in = x.second;
        int m = 0;
        for(int i = 0; i < v[in].size(); i++)
            if(v[in][i].size() > 0)
                m++;
        cout << " " << m;
        for(int i = 0; i < v[in].size(); i++)
            if(v[in][i].size() > 0)
                cout << " " << v[in][i];
        cout << endl;
    }
    return 0;
}