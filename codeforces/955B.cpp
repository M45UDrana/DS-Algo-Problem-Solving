#include <bits/stdc++.h>

using namespace std;

int a[4];
map<char,int> mp;

int main()
{
    string s; cin >> s;
    int k = 0;
    for(int i = 0; i < s.size(); i++)
    {
        int idx;
        if(mp[s[i]])
            idx = mp[s[i]];
        else
        {
            idx = ++k;
            mp[s[i]] = idx;
        }
        if(k == 5)
            return !(cout << "NO" << endl);
        a[idx-1]++;
    }
    sort(a,a+4);
    if(!a[0])
    {
        a[0]++;
        a[3]--;
    }
    if(!a[1])
    {
        a[1]++;
        a[2]--;
    }
    for(int i = 0; i < 4; i++)
        if(a[i] < 1)
            return !(cout << "No" << endl);
    cout << "Yes" << endl;
    return 0;
}