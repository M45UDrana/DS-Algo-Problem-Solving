#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    string s[n];
    for(int i = 0; i < n; i++)
        cin >>s[i];
    map<string,int> mp;
    for(int i = n-1; i >= 0; i--)
    {
        if(!mp[s[i]])
        {
            cout << s[i] << endl;
            mp[s[i]] = 1;
        }
    }
    return 0;
}