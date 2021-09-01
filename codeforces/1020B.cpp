#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n+1];
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    vector<int>v;
    for(int i = 1; i <= n; i++)
    {
        int b[n+1];
        memset(b, 0, sizeof(b));
        b[i]++;
        int j = i;
        while(b[j] != 2)
        {
            j = a[j];
            b[j]++;
        }
        v.push_back(j);
    }
    for(int i = 0; i < v.size(); i++)
    {
        if(i)
            cout << " " << v[i];
        else cout << v[i];
    }
    cout << endl;
    return 0;
}