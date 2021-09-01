#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; 
        scanf("%d", &n);
        double a[n];
        for(int i = 0; i < n; i++)
            scanf("%lf", &a[i]);
        sort(a, a+n);
        long double p = (long double)1e9;
        int l = -1, r = -1;
        pair<int,int> ans = {-1,-1};
        for(int i = 1; i < n; i++)
        {
            if(a[i] == a[i-1])
            {
                l = r;
                r = i;
                if(l > 0)
                {
                    long double c = a[r], d = a[l];
                    long double x = 2*(c+d);
                    x = (x*x)/(c*d);
                    if(x < p)
                    {
                        p = x;
                        ans = {(int)a[r], (int)a[l]};
                    }
                }
                i++;
            }
        }
        printf("%d %d %d %d\n", ans.first, ans.first,
                ans.second, ans.second);
    }
    return 0;
}