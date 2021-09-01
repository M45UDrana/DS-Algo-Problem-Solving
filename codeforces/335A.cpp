#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin >> s;
    int n; cin >> n;
    int chr[26];
    memset(chr, 0, sizeof(chr));
    for(int i = 0; i < s.size(); i++)
        chr[(int)s[i]-'a']++;
    int ans = -1;
    for(int i = 1000; i > 0; i--)
    {
        int m = 0;
        for(int j = 0; j < 26; j++)
        {
            m += (chr[j] + (i-1))/i;
        }
        if(m <= n)
            ans = i;
    }
    cout << ans << endl;
    if(ans != -1)
    {
        vector<char> ch;
        for(int j = 0; j < 26; j++)
        {
            int x = (chr[j] + (ans-1))/ans;
            while(x--)
                ch.push_back(char(j+'a'));
        }
        int m = ch.size();
        for(int i = 0; i < n; i++)
            cout << ch[i%m];
        cout << endl;
    }
    return 0;
}