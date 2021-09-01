#include <bits/stdc++.h>

using namespace std;

string s;

bool isP(int i , int j)
{
    while(i <= j)
    {
        if(s[i] != s[j])
            return true;
        i++;
        j--;
    }
    return false;
}
int main()
{
    cin >> s;
    int n = s.size();
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = n-1; j > i; j--)
        {
            if(isP(i, j))
                ans = max(ans, j+1-i);
        }
    }
    cout << ans << endl;
    return 0;
}