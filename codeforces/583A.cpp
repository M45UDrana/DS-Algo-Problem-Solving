#include <bits/stdc++.h>

using namespace std;
#define MEM(a, b) memset(a, (b), sizeof(a))

int main()
{
    int n, l, r;
    cin >> n;
    int a[n+1];
    MEM(a, 0);
    vector<int> v;
    for(int i = 1; i <= n*n; i++)
    {
        cin >> l >> r;
        if(a[l] == 0 && a[r] == 0)
        {
            v.push_back(i);
            a[l]++;
            a[r]++;
        }
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}