#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    string s; cin >> s;
    int a[4];
    memset(a, 0, sizeof(a));
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'U')
            a[0]++;
        else if(s[i] == 'D')
            a[1]++;
        else if(s[i] == 'L')
            a[2]++;
        else a[3]++;
    }
    cout << (min(a[0],a[1]) * 2) + (min(a[2], a[3]) * 2) << endl;
    return 0;
}