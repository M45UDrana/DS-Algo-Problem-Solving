#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> v(n);
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    a *= v[0];
    v[0] = 0;
    sort(v.begin(), v.end());
    int ans = 0, in = n-1;
    while(a/sum < b)
    {
        sum -= v[in];
        ans++;
        in--;
    }
    cout << ans << endl;
    return 0;
}