#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    string s;
    getline(cin, s);
    bool ok = true;
    for(int j = 0; j < n; j++)
    {
        getline(cin, s);
        int cnt = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'a')
                cnt++;
            else if(s[i] == 'e')
                cnt++;
            else if(s[i] == 'i')
                cnt++;
            else if(s[i] == 'o')
                cnt++;
            else if(s[i] == 'u')
                cnt++;
            else if(s[i] == 'y')
                cnt++;
        }
        if(cnt != a[j])
            ok = false;
    }
    if(ok)
        cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}