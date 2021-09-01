#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int lft = 0, rht = m-1;
    while(lft < rht)
    {
        int mid = (lft+rht)/2, pre = 0;
        bool ok = true;
        for(int i = 0; i < n; i++)
        {
            if(pre > a[i])
            {
                if(pre-a[i] > mid)
                    ok = false;
            }
            if(pre < a[i])
            {
                if(m-a[i]+pre > mid)
                    pre = a[i];
            }
        }
        if(ok)
            rht = mid;
        else lft = mid+1;
    }
    cout << lft << endl;
    return 0;
}