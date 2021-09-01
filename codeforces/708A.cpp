#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin >> s;
    int n = s.size();
    int i = 0;
    bool ok = true;
    while(s[i] == 'a' and i < n)
        i++;
    while(s[i] != 'a' and i < n)
    {
        ok = false;
        s[i] -= 1;
        i++;
    }
    if(ok)
        s[n-1] = 'z';
    cout << s << endl;
    return 0;
}