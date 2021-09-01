#include <bits/stdc++.h>

using namespace std; 
int main() 
{ 
    int n; cin >> n; 
    string s; cin >> s; 
    int ans = 0;
    for(int i = 0, j; i < n; i++)
    {
        ans++;
        int x = 0, y = 0, dis = 0;
        for(j = i; j < n; j++)
        {
            if(s[j] == 'R')
                x++;
            else if(s[j] == 'L')
                x--;
            else if(s[j] == 'U')
                y++;
            else y--;
            if(dis >= abs(x) + abs(y))
            {
                break;
            }
            dis = abs(x) + abs(y);
        }
        i = j-1;
    }
    cout << ans << endl;
    return 0;
}