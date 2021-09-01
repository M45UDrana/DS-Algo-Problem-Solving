#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin >> s;
    int n = s.size();
    s += s;
    int ans = 1, cnt = 1;
    for(int i = 1; i < n*2; i++)
    {
        if(s[i] != s[i-1])
        {
            cnt++;
            ans = max(ans,cnt);
        }
        else cnt = 1;
    }
    cout << min(ans, n) << endl;
    return 0;
}