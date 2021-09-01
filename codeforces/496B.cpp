#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i = 0; cin >> n;
    string s, ans; cin >> s;
    ans = s;
    n--;
    while(i < n+5)
    {
        int d = ':' - s[n];
        for(int i = 0; i < n; i++)
        {
            s[i] += d;
            if(s[i] > '9')
                s[i] = '0' + (s[i] - ':');
        }
        s = "0" + s;
        s.pop_back();
        ans = min(s, ans);
        i++;
    }
    cout << ans << endl;
    return 0;
}