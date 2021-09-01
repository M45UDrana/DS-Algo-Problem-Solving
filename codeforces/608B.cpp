#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, b; cin >> s >> b;
    int n = s.size();
    int Ssum[n];
    for(int i = 0; i < n; i++)
    {
        if(i == 0)
            Ssum[i] = s[i]-'0';
        else Ssum[i] = Ssum[i-1] + (s[i]-'0');
    }
    int m = b.size();
    long long ans = 0;
    for(int i = 0, j; i < m; i++)
    {
        int x = b[i] - '0';
        int in = min(n-1, i);
        ans += (Ssum[in] * abs(1-x)) + ((min(n, i+1)-Ssum[in]) * abs(0-x));
        if(i+n > m)
        {
            j = (i+n)%(m+1);
            ans -= (Ssum[j] * abs(1-x)) + ((min(n, j+1)-Ssum[j]) * abs(0-x));
        }
    }
    cout << ans << endl;

    return 0;
}