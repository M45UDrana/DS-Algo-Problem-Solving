#include <bits/stdc++.h>

using namespace std;
#define debugsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'

int main()
{
    int n;
    cin >> n;
    int a[n];
    vector<int>v;
    for(int i = 0; i < n; i++)
    cin >> a[i];

    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            v.push_back(a[i]+a[j]);
        }
    }
    n = v.size();
    sort(v.begin(), v.end());
    int cnt = 1, ans = 0;
    for(int i = 1; i <n; i++)
    {
//        cout << v[i] << endl;
        if(v[i-1] == v[i])
        {
            cnt++;
        }
        else if(v[i-1] != v[i])
        {
            ans = max(cnt, ans);
            cnt = 1;
        }
    }
    ans = max(cnt, ans);
    cout << ans << endl;

    return 0;
}