#include <bits/stdc++.h>

using namespace std;

const int mod = 1e9+7;

int main()
{
    map<char, int> mp;
    int in = 0;
    for(char i = '0'; i <= '9'; i++)
        mp[i] = in++;
    for(char i = 'A'; i <= 'Z'; i++)
        mp[i] = in++;
    for(char i = 'a'; i <= 'z'; i++)
        mp[i] = in++;
    mp['-'] = in++; mp['_'] = in;
    string s; cin >> s;
    long long ans = 1;
    for(int i = 0; i < s.size(); i++)
    {
        int x = mp[s[i]];
        for(int j = 0; j < 6; j++)
        {
            if(!(x & (1 << j)))
                ans = (ans*3)%mod;
        }
    }
    cout << ans << endl;
    return 0;
}