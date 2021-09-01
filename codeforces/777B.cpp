#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    string s; cin >> s;
    for(int i = 0; i < n; i++)
        a[i] = s[i]-'0';
    int b[n];
    cin >> s;
    for(int i = 0; i < n; i++)
        b[i] = s[i] - '0';
    sort(a, a+n);
    sort(b, b+n);
    int mx = 0, mn = 0;
    bool visit[n];
    memset(visit, 0, sizeof(visit));
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(!visit[j] and a[i] <= b[j])
            {
                mn++;
                visit[j] = true;
                break;
            }
        }
    }
    memset(visit, 0, sizeof(visit));
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(!visit[j] and b[i] > a[j])
            {
                mx++;
                visit[j] = true;
                break;
            }
        }
    }
    cout << n-mn << endl << mx << endl;
    return 0;
}