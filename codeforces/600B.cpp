#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);
    for(int i = 0; i < n; i++)cin>>a[i];
    for(int i = 0; i < m; i++)cin>>b[i];
    sort(a.begin(),a.end());

    for(int i = 0; i < m; i++)
    {
        int lft = -1, rht = n-1;
        while(lft < rht)
        {
            int mid = lft+(rht+1-lft)/2;
            if(a[mid] <= b[i])
                lft = mid;
            else rht = mid-1;
        }
        cout << lft+1 << " ";
    }
    cout << endl;
    return 0;
}