#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    n *= 2;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a+n);
    int ans = a[n-1]-a[0];
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            int l = 0, r = 1, sum = 0;
            while(1)
            {
                if(l == i) l++;
                if(l == j) l++;
                r = l+1;
                if(r == i) r++;
                if(r == i) r++;
                if(r >= n) break;
                sum += a[r]-a[l];
                l = r+1;
            }
            ans = min(ans, sum);
        }
    }
    cout << ans << endl;

    return 0;
}