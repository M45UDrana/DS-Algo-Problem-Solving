#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin >> s;
    s = " " + s;
    int n = s.size();
    vector<int> v[26];
    for(int i = 1; i < n; i++)
        v[s[i]-'a'].push_back(i);
    int ans = n-1;
    for(int i = 0; i < 26; i++)
    {
        int sb = 0, l = 0;
        for(int j = 0; j < v[i].size(); j++)
        {
            sb = max(sb, v[i][j]-l);
            l = v[i][j];
        }
        if(v[i].size() > 0)
            ans = min(ans, max(sb, n-v[i][v[i].size()-1]));
    }
    cout << ans << endl;
    return 0;
}