#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    vector<char> s[n];
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            char c; cin >> c;
            s[j].push_back(c);
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            cout << s[i][j] << s[i][j];
        cout << endl;
        for(int j = 0; j < m; j++)
            cout << s[i][j] << s[i][j];
        cout << endl;
    }
    return 0;
}