#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n], b[n], ans[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
        cin >> b[i];

    bool used[n+1];
    memset(used, 0, sizeof(used));
    vector<int>in, unused;
    for(int i = 0; i < n; i++)
    {
        if(a[i] != b[i])
            in.push_back(i);
        else
            used[a[i]] = true;
        ans[i] = b[i];
    }

    for(int i = 1; i <= n; i++)
        if(!used[i])
            unused.push_back(i);

    int m = unused.size();
    for(int i = 0; i < m; i++)
        unused.push_back(unused[i]);

    for(int i = 0; i < m; i++)
    {
        int difa = 0, difb = 0;
        for(int j = 0; j < m; j++)
        {
            ans[in[j]] = unused[j+i];
            difa += (a[in[j]] != ans[in[j]]);
            difb += (b[in[j]] != ans[in[j]]);
        }
        if(difa == 1 and difb == 1)
            break;
    }

    for(int i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << endl;
    return 0;
}