#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, t; cin >> s >> t;
    int a[130];
    memset(a, 0, sizeof(a));
    for(int i = 0; i < t.size(); i++)
    {
        a[(int)t[i]]++;
    }
    int ans1 = 0, ans2 = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(a[(int)s[i]] > 0)
        {
            ans1++;
            a[(int)s[i]]--;
            s[i] = '-';
        }
    }
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] != '-')
        {
            s[i] += ((int)s[i] > 90) ? (-'a'+'A') : (-'A'+'a');
            if(a[(int)s[i]] > 0)
            {
                ans2++;
                a[(int)s[i]]--;
                s[i] = '-';
            }
        }
    }
    cout << ans1 << " " << ans2 << endl;
    return 0;
}