#include <bits/stdc++.h>

using namespace std;

const int N = 1e5+2;

int main()
{
    int n = sqrt(N);
    bool p[N];
    memset(p, 0, sizeof(p));
    for(int i = 4; i < N; i+=2)
        p[i] = 1;
    for(int i = 3; i <= n; i+=2)
    {
        if(!p[i])
        {
            for(int j = i*i; j < N; j += 2*i)
                p[j] = 1;
        }
    }
    int m; cin >> m;
    if(m < 3)
        cout << 1 << endl;
    else cout << 2 << endl;
    for(int i = 2; i <= m+1; i++)
    {
        if(!p[i])
            cout << 1 << " ";
        else cout << 2 << " ";
    }
    cout << endl;

    return 0;
}