#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin >> s;
    int x = 0, ans = 1;
    for(int i = 0; i < s.size(); i++)
    {
        x *= 10;
        x += (int)s[i]-'0';
        x %= 4;
    }
    if(!x)
        x = 4;
    ans += pow(2,x);
    ans += pow(3,x);
    ans += pow(4, x);
    cout << ans%5 << endl;
    return 0;
}