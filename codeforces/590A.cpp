#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int ans = 0;
    for(int i = 0, l, r; i < n-1; i++)
    {
        if(a[i] != a[i+1])
        {
            int cnt = 0;
            l = r = i+1;
            while(a[r] != a[r+1] and r < n-1)
                r++;

            int k = (r+1-l)/2; 
            ans = max(ans, k);

            for(int j = l; j < r ; j++)
            {
                if(j-l < k)
                    a[j] = a[i];
                else a[j] = a[r];
            } 
            i = r-1;
        }
    }
    cout << ans << endl;
    for(int i = 0; i < n; i++)
        cout << a[i] << " \n"[i == n-1];
    return 0;
}