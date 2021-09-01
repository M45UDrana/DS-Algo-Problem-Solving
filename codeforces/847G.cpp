#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    string s;
    vector<int>ans(7, 0);
    for(int i = 0; i < n; i++)
    {
        cin >> s;
        for(int i = 0; i < s.size(); i++)
            ans[i] += s[i] - '0';
    }
    for(int i = 0; i < 7; i++)
        ans[0] = max(ans[0], ans[i]);
    cout << ans[0] << endl;
    return 0;
}