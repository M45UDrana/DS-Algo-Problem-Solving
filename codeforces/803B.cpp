#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int pre[n], suf[n];
    int x = -1;
    for(int i = 0; i < n; i++)
    {
        if(!a[i])
            x = i;
        pre[i] = x;
    }
    x = -1;
    for(int i = n-1; i >= 0; i--)
    {
        if(!a[i])
            x = i;
        suf[i] = x;
    }
    for(int i = 0; i < n; i++)
    {
        int dis = (int)1e9;
        if(pre[i] != -1)
            dis = min(dis, i-pre[i]);
        if(suf[i] != -1)
            dis = min(dis, suf[i]-i);
        cout << dis << " ";
    }
    cout << endl;
    return 0;
}