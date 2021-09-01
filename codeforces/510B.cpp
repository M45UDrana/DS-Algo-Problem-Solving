#include <bits/stdc++.h>

using namespace std;

#define ff first
#define ss second

int main()
{
    int n, m; cin >> n >> m;
    string s[n];
    for(int i = 0; i < n; i++)
        cin >> s[i];
    bool visit[n][m];
    memset(visit, 0, sizeof(visit));
    vector<vector<pair<int,int> > > fhr(n, vector<pair<int,int> >(m));
    for(int rw = 0; rw < n; rw++)
    {
        for(int cl = 0; cl < m; cl++)
        {
            if(visit[rw][cl])
                continue;
            visit[rw][cl] = true;
            char ch = s[rw][cl];
            stack<pair<int, int> > nd;
            nd.push(make_pair(rw, cl));
            while(!nd.empty())
            {
                pair<int, int> u = nd.top();
                nd.pop();
                int j = 0;
                for(int i : {-1, 0, +1, 0})
                {
                    if(0 <= u.ff+i and u.ff+i < n and 0 <= u.ss+j and u.ss+j < m)
                    {
                        if(!visit[u.ff+i][u.ss+j] and s[u.ff+i][u.ss+j] == ch)
                        {
                            visit[u.ff+i][u.ss+j] = true;
                            nd.push(make_pair(u.ff+i, u.ss+j));
                            fhr[u.ff+i][u.ss+j].ff = u.ff;
                            fhr[u.ff+i][u.ss+j].ss = u.ss;
                        }
                        else if(s[u.ff+i][u.ss+j] == ch and (fhr[u.ff][u.ss].ff != 
                                    u.ff+i or fhr[u.ff][u.ss].ss != u.ss+j))
                        {
                            cout << "Yes" << endl;
                            return 0;
                        }
                    }
                    j = i;
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;
}