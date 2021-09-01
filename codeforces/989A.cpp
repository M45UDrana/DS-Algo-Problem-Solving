#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin >> s;
    int n = s.size();
    for(int i = 1; i < n-1; i++)
    {
        if((s[i-1]+s[i]+s[i+1]) == ('A'+'B'+'C') and s[i-1] != s[i])
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}