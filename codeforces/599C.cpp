#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n; 
    int a[n], premx[n], sufmn[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(i)
            premx[i] = max(a[i], premx[i-1]);
        else premx[i] = a[i];
    }
    for(int i = n-1; i >= 0; i--)
    {
        if(i < n-1)
            sufmn[i] = min(sufmn[i+1], a[i]);
        else sufmn[i] = a[i];
    }
    int cnt = 0;
    for(int i = 0; i < n-1; i++)
    {
        if(sufmn[i+1] >= premx[i])
            cnt++;
    }
    cout << cnt + 1 << endl;
    return 0;
}