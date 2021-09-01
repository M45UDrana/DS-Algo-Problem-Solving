#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    bool visit[n+2][m+2];
    memset(visit, 0, sizeof(visit));
    for(int i = 0; i <= n+1; i++)
    {
        visit[i][0] = true;
        visit[i][m+1] = true;
    }
    for(int i = 0; i <= m+1; i++)
    {
        visit[0][i] = true;
        visit[n+1][i] = true;
    } 
    vector<pair<int,int> > v;
    int i = 1, j = 1;
    v.push_back(make_pair(i, j));
    visit[i][j] = true;
    while(1)
    {
        if(!visit[i][j-1])
        {
            v.push_back(make_pair(i, j-1));
            visit[i][j-1] = true;
            j--;
        }
        else if(!visit[i][j+1])
        {
            v.push_back(make_pair(i, j+1));
            visit[i][j+1] = true;
            j++;
        }
        else if(!visit[i+1][j])
        {
            v.push_back(make_pair(i+1, j));
            visit[i+1][j] = true;
            i++;
        }
        else break;
    }
    for(int i = 0, j = 0; i < v.size(); )
    {
        if(j+1 < k)
        {
            cout << 2 << " ";
            cout << v[i].first << " " << v[i].second << " ";
            i++;
            cout << v[i].first << " " << v[i].second << endl; 
            i++; j++;
        }
        else 
        {
            cout << (int)v.size() - (j*2) << " ";
            for( ; i < v.size(); i++)
                cout << v[i].first << " " << v[i].second << " ";
            cout << endl;
        }
    }
    return 0;
}