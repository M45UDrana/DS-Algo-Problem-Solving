#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n, m; cin >> n >> m;
    vector<int> f[n+1];
    for(int i = 1, x; i <= n; i++)
    {
        cin >> x;
        f[x].push_back(i);
    }
    int a[m+1];
    bool am = false, im = false;
    for(int i = 1, x; i <= m; i++)
    {
        cin >> x;
        if(f[x].size() == 0)
            im = true;
        else 
        {
            if(f[x].size() > 1)
                am = true;
            a[i] = f[x][0];
        }

    }
    if(im)
        cout << "Impossible" << endl;
    else if(am)
        cout << "Ambiguity" << endl;
    else 
    {
        cout << "Possible" << endl;
        for(int i = 1; i <= m; i++)
        {
            if(i == 1)
                cout << a[i];
            else cout << " " << a[i];
        }
        cout << endl;
    }
    return 0;
}