#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    n *= 2;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int ans = 0;
    for(int i = 0; i < n; i+=2)
    {
        int j = i+1;
        while(a[j] != a[i])
        {
            j++;
            ans++;
        }
        while(j > i+1)
        {
            swap(a[j],a[j-1]);
            j--;
        }
    }
    cout << ans << endl;
    return 0;
}