#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, ans = 0; cin >> n;
    string s; cin >> s;
    for(int i = n; i < s.size(); i+=n)
    {
        char c = s[i-1];
        if(s[i-2] == c and s[i-3] == c)
            ans++;
    }
    cout << ans << endl;
    return 0;
}