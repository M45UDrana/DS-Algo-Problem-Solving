#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    string s; cin >> s;
    int chr[10], cnt = 0, cnt_ = 0;
    memset(chr, 0, sizeof(chr));
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '?')
            cnt_++;
        if('A' <= s[i] and s[i] <= 'J')
            chr[(int)s[i]-'A']++;
    }

    for(int i = 0; i < 10; i++)
        cnt += int (chr[i] > 0);
    ll flg = ('A' <= s[0] and s[0] <= 'J') ? 1 : 0;
    ll ans = 1, k = 10;
    while(cnt--)
    {
        ans *= (k-flg);
        flg = 0;
        k--;
    }
    if(s[0] == '?')
    {
        ans *= 9;
        cnt_--;
    }
    cout << ans;
    while(cnt_--)
        cout << 0;
    cout << endl;

    return 0;
}