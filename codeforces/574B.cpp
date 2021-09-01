#include <bits/stdc++.h>

using namespace std;
#define IO ios_base::sync_with_stdio(0); cin.tie(0);

int a[4001][4001]={0};
int ind[4001]={0};
int main()
{
    IO
    int n, m; cin >> n >> m;
    int l[m], r[m];
    for(int i = 0; i < m; i++)
    {
        cin >> l[i] >> r[i];
        a[l[i]][r[i]] = 1; a[r[i]][l[i]] = 1;
        ind[l[i]]++; ind[r[i]]++;
    }
    int ans = 1e5, sum;
    
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j <= n; j++)
        {
            if(a[l[i]][j] == 1 && a[r[i]][j] == 1)
            {
                sum = (ind[l[i]] + ind[r[i]] + ind[j]) -6;
                sum = max(0, sum);
                ans = min(sum, ans);
            }
        }
    }


    if(ans < 1e5)
        cout << ans << endl;
    else cout << -1 << endl;
    return 0;
}