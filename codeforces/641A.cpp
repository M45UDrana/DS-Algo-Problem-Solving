#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    bool visit[n];
    memset(visit, 0, sizeof(visit));
    string s; cin >> s;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int cur = 0;
    for(int i = 0; i < n*2; i++)
    {
        if(cur < 0 or cur >= n)
        {
            cout << "FINITE" << endl;
            return 0;
        }
        else if(visit[cur])
        {
            cout << "INFINITE" << endl;
            return 0;
        }
        else 
        {
            visit[cur] = true;
            if(s[cur] == '<')
                cur -= a[cur];
            else cur += a[cur];
        }
    }
    return 0;
}