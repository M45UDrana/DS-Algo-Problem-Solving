#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin >> s;
    int m = (s.size()+1)/2;
    int a[m];
    memset(a, 0, sizeof(a));
    int n; cin >> n;
    for(int i = 0, x; i < n; i++)
    {
        cin >> x; x--;
        a[x] = (a[x]+1)%2;
    }
    int cnt = 0;
    n = s.size()-1;
    for(int i = 0; i < m; i++)
    {
        int b = (a[i]+cnt)%2;
        if(b)
        {
            swap(s[i], s[n-i]);
        }
        if(a[i])
            cnt++;
    }
    cout << s << endl;
    return 0;
}