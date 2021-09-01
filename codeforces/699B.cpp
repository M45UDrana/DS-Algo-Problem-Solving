#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    string s[n];
    for(int i = 0; i < n; i++)
        cin >> s[i];
    int rw[n], clm[m], cnt = 0;
    memset(rw, 0, sizeof(rw));
    memset(clm, 0, sizeof(clm));
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(s[i][j] == '*')
            {
                rw[i]++;
                clm[j]++;
                cnt++;
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            int in = 0;
            if(s[i][j] == '*')
                in = -1;
            if(rw[i]+clm[j]+in == cnt)
                return !(cout << "YES" << endl << i+1 <<
                        " " << j+1 << endl);
        }
    }
    cout << "NO" << endl;
    return 0;
}