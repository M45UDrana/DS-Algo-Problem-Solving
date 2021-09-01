#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k; cin >> n >> k;
    int a[n];
    int e = 0, s = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] == 1)
            e++;
        else s++;
    }
    int res = 0;
    for(int i = 0; i < k; i++)
    {
        int cnte = 0, cnts = 0;
        for(int j = 0; j < n; j++)
        {
            if(j%k == i)
                continue;
            if(a[j] == 1)
                cnte++;
            else cnts++;
        }
        res = max(res, abs(cnte-cnts));
    }
    cout << res << endl;
    return 0;
}