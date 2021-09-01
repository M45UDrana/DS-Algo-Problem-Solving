#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    string s; cin >> s;
    int k = 0;
    for(int i = 0; i < n; i++)
        if(s[i] == ')')
            k++;
    if(n%2 or k > n/2)
        return !(cout << ":(" << endl);
    k = (n/2)-k;
    for(int i = n-1; i >= 0; i--)
    {
        if(s[i] == '?')
        {
            if(k)
            {
                s[i] = ')';
                k--;
            }
            else s[i] = '(';
        }
    }
    for(int i = 0, l = 0, r = 0; i < n; i++)
    {
        if(s[i] == '(')
            l++;
        else r++;

        if((r >= l and i < n-1) or (i+1 == n and r != l))
            return !(cout << ":(" << endl);
    }
    cout << s << endl;
    return 0;
}