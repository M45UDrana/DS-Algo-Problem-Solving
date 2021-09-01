#include <iostream>

using namespace std;

int main()
{
    string s, t; cin >> s >> t;
    int n = s.size(), m = t.size();
    int lft[m] = {0}, rgt[m] = {0};
    for(int i = 0, j = 0; i < n && j < m; i++)
    {
        if(s[i] == t[j])
        {
            lft[j] = i;
            j++;
        }
    }
    for(int i = n-1, j = m-1; i >= 0 && j >= 0; i--)
    {
        if(s[i] == t[j])
        {
            rgt[j] = i;
            j--;
        }
    }
    int ans = 0;
    for(int i = 0; i < m-1; i++)
        ans = max(ans, rgt[i+1]-lft[i]-1);
    ans = max(ans, rgt[0]);
    ans = max(ans, n-lft[m-1]-1);
    cout << ans << endl;

    return 0;
}