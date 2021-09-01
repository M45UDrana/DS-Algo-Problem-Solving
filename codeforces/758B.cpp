#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin >> s;
    string g = "    ";
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] != '!')
            g[i%4] = s[i];
    }
    map<char, int> mp;
    mp['R'] = 0; mp['B'] = 0; mp['Y'] = 0; mp['G'] = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '!')
        {
            mp[g[i%4]]++;
        }
    }
    cout<<mp['R']<<" "<<mp['B']<<" "<<mp['Y']<<" "<<mp['G']<<endl;
    return 0;
}