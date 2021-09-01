#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0);
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int anr[130];
    memset(anr, 0, sizeof(anr));
    char c = s[0];
    for(int i = 0; i < n; i++)
    {
        c = min(c, s[i]);
        anr[s[i]]++;
    }
    if(k > n)
    {
        string t = s + string(k-n, c);
        return !(cout << t << endl);
    }
    string t = "";
    for(int i = 0; i < k; i++)
        t += s[i];
    for(int i = k-1; i >= 0; i--)
    {
        for(int j = 97; j < 123; j++)
        {
            if(anr[j])
            {
                t[i] = (char) j;
                if(t > s)
                    return !(cout << t << endl);
                t[i] = c;
            }
        } 
    }
    return 0;
}