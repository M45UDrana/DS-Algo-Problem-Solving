#include <bits/stdc++.h>

using namespace std;

const int N = 1e5+1;

int main()
{
    int n, k; cin >> n >> k;
    int b[N], s[N];
    memset(b, 0, sizeof(b));
    memset(s, 0, sizeof(s));
    char ch;
    int p, d;
    for(int i = 0; i < n; i++)
    {
        cin >> ch >> p >> d;
        if(ch == 'B')
            b[p] += d;
        else s[p] += d;
    }
    vector<pair<int,int> > ans;
    int cnt = 0;
    for(int i = 0; i < N and cnt < k; i++)
    {
        if(s[i])
        {
            ans.push_back(make_pair(i, s[i]));
            cnt++;
        }
    }
    for(int i = ans.size()-1; i >= 0; i--)
        cout << 'S' << " " << ans[i].first << " " << ans[i].second << endl;
    cnt = 0;
    for(int i = N-1; i >= 0 and cnt < k; i--)
    {
        if(b[i])
        {
            cout << 'B' << " " << i << " " << b[i] << endl;
            cnt++;
        }
    }
    return 0;
}