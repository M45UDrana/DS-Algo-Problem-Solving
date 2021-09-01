#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    int a[n+1];
    for(int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    for(int ii = 0,l,r,x,p; ii < m; ii++)
    {
        scanf("%d%d%d", &l, &r, &x);
        p = a[x];
        int cnt = 0;
        for(int i = l; i <= r; i++)
            if(a[i] < p)
                cnt++;
        if(l+cnt == x)
            printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}