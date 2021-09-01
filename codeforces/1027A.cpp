#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        int i = 0, j = n-1;
        bool ok = true;
        while(i < j)
        {
            int dif = abs((int)s[i]-s[j]);
            if(dif > 2 or dif == 1)
            {
                ok = false;
                break;
            }
            i++;
            j--;
        }
        if(ok)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}