#include <bits/stdc++.h>

using namespace std;
#define debugsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'
#define ll long long
const int N=1e5+5;

int main()
{
    int n;
    cin >> n;
    ll str, in, exp, ans = 0;
    while(n--)
    {
        cin >> str >> in >> exp;
        ans = 0;
        if(str <= in)
        {
            exp -= (in - str) + 1;
            str += (in - str) + 1;
        }
        if(exp < 0)
        {
            cout << 0 << endl;
            continue;
        }
        ans += ((exp / 2) + 1);
        str += (exp + 1) / 2;
        in += (exp / 2);

        ll temp = ((str - in - 1) / 2);
        if(temp <= ((exp + 1) / 2) && temp > 0 )
            ans += temp;
        else if(temp > ((exp + 1) / 2))
            ans += ((exp + 1) / 2);

        cout << ans << endl;
    }

    return 0;
}