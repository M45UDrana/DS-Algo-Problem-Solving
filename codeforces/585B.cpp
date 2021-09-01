#include <bits/stdc++.h>

using namespace std;

#define ff first
#define ss second 

int n, k; 
string s[3];

bool flg;

void dfs(int i, int j, int c)
{
    if(j == n-1)
        flg = true;
    if(flg)
        return;
    j++;
    if(j+c >= n or s[i][j+c] == '.')
    {
        c += 2;
        if(j+c >= n or s[i][j+c] == '.')
        {
            dfs(i, j, c);
        }
        if(i > 0 and (j+c >= n or s[i-1][j+c] == '.')
                and s[i-1][j+c-2] == '.')
        {
            dfs(i-1, j, c);
        }
        if(i < 2 and (j+c >= n or s[i+1][j+c] == '.')
                and s[i+1][j+c-2] == '.')
        {
            dfs(i+1, j, c);
        }
    }
}
    //cout << i <<' '<<j<<' '<<c<<' '<<"form" << endl;
    //cout << i << " " << j << " " << c << endl;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        cin >> n >> k;
        cin >> s[0] >> s[1] >> s[2];

        flg = false;
        if(s[0][0] == 's')
            dfs(0, 0, 0); 
        else if(s[1][0] == 's')
            dfs(1, 0, 0);
        else dfs(2, 0, 0);
        if(flg)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}