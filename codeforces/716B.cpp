#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin >> s;
    if(s.size() < 26)
        return !(cout << -1 << endl);
    int cnt[100], d = 0;
    memset(cnt, 0, sizeof(cnt));
    bool ok = false;
    for(int i = 0, l = 0; i < s.size(); i++)
    {
        if(s[i] == '?')
            cnt[0]++;
        else
        {
            if(cnt[s[i]] == 0)
                d++;
            cnt[s[i]]++;
        }

        if(i+1-l > 26)
        {
            if(s[l] == '?')
                cnt[0]--;
            else 
            {
                cnt[s[l]]--;
                if(cnt[s[l]] == 0)
                    d--;
            }
            l++;
        }
        if(d == 26)
            ok = true;
        if(d+cnt[0] == 26)
        {
            ok = true;
            for(char c = 'A'; c <= 'Z'; c++)
            {
                if(cnt[c] == 0)
                {
                    while(s[l] != '?')
                        l++;
                    s[l] = c;
                }
            }
            for(int j = 0; j < s.size(); j++)
                if(s[j] == '?')
                    s[j] = 'A';
            if(ok)
            return !(cout << s << endl);
        }
    }
    cout << -1 << endl;
    return 0;
}