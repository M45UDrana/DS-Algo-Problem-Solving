#include <bits/stdc++.h>

using namespace std;

int has[3], nxt[3];

int main()
{
    int n; cin >> n;
    string s; cin >> s;
    int m = n/3;
    for(int i = 0; i < s.size(); i++)
        nxt[s[i]-'0']++;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '0')
        {
            if(has[0] == m and (has[1]+nxt[1]) < m)
            {
                s[i] = '1';
                has[1]++;
            }
            else if(has[0] == m and (has[2]+nxt[2]) < m)
            {
                s[i] = '2';
                has[2]++;
            }
            else has[0]++;
            nxt[0]--;
        }
        else if(s[i] == '1')
        {
            if(nxt[1] > m and (has[0]+nxt[0]) < m)
            {
                s[i] = '0';
                has[0]++;
            }
            else if(has[1] == m and (has[2]+nxt[2]) < m)
            {
                s[i] = '2';
                has[2]++;
            }
            else has[1]++;
            nxt[1]--;
        }
        else 
        {
            if(nxt[2] > m and (has[0]+nxt[0]) < m)
            {
                s[i] = '0';
                has[0]++;
            }
            else if(nxt[2] > m and (has[1]+nxt[1]) < m)
            {
                s[i] = '1';
                has[1]++;
            }
            else has[2]++;
            nxt[2]--;
        }
    }
    cout << s << endl;
    return 0;
}