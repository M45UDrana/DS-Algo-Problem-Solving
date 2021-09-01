#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n+1], idx[n+1];
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        idx[a[i]] = i;
    }

    string s = string(n+1, 'B');
    for(int i = n, j; i >= 1; i--)
    {
        j = idx[i];
        while(j+i <= n)
        {
            j += i;
            if(a[j] > i and s[j] == 'B')
                s[idx[i]] = 'A';
        }
        j = idx[i];
        while(j-i > 0)
        {
            j -= i;
            if(a[j] > i and s[j] == 'B')
                s[idx[i]] = 'A';
        }
    }
    for(int i = 1; i <= n; i++)
        cout << s[i];
    cout << endl;
    return 0;
}