#include <bits/stdc++.h>

using namespace std;

const int N = 2e5+5;

int main()
{
    int n, k, q; cin >> n >> k >> q;
    vector<int> v(N, 0);
    for(int i = 0; i < n; i++)
    {
        int x, y; cin >> x >> y;
        v[x]++; v[y+1]--;
    }
    for(int i = 1, x = 0; i < N; i++)
    {
        x += v[i];
        v[i] = v[i-1] + (x >= k);
    }
    for(int i = 0; i < q; i++)
    {
        int x, y; cin >> x >> y;
        cout << v[y] - v[x-1] << endl;
    }
    return 0;
}