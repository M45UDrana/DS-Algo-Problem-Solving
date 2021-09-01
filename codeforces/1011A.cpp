#include <bits/stdc++.h>

using namespace std;

const int oo = 1e9+7;

int main()
{
    int n, k; cin >> n >> k;
    string s; cin >> s;
    sort(s.begin(), s.end());
    int ans = oo;
    for(int i = 0; i < n; i++)
    {
        char cur;
        int cnt = 0, kk = 0;
        for(int j = i; j < n; j++)
        {
            if(i == j)
            {
                cur = s[i];
                kk++;
                cnt += (s[i] - 'a')+1;
            }
            else if(s[j] > cur+1)
            {
                cnt += (s[j] - 'a')+1;
                kk++;
                cur = s[j];
            }
            if(kk == k)
            {
                ans = min(ans, cnt);
                break;
            }
        }
    }
    if(ans == oo)
        cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}