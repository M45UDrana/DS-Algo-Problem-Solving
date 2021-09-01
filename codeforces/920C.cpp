#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n+1];
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    string s; cin >> s;
    s = " "+s;
    for(int i = 1; i <= n; i++)
    {
        if(s[i] == '0' and a[i] != i)
            return !(cout << "NO" << endl);
        if(s[i] == '1')
        {
            int j = i;
            while(s[j] == '1')
                j++;
            for(int k = i; k <= j; k++)
            {
                if(i > a[k] or a[k] > j)
                    return !(cout << "NO" << endl);
            }
            i = j;
        }
    }
    cout << "YES" << endl;
    return 0;
}