#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, m; cin >> n >> k >> m;
    vector<int> v[m];
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        v[x%m].push_back(x);
    }
    for(int i = 0; i < m; i++)
    {
        if(v[i].size() >= k)
        {
            cout << "Yes" << endl;
            for(int j = 0; j < k; j++)
                cout << v[i][j] << " \n"[j == k-1];
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}