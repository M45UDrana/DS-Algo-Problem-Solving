#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<int>a, b;
    for(int i = 0, x; i < n; i++)
    {
        cin >> x;
        if(x)
            a.push_back(x);
    }
    for(int i = 0, x; i < n; i++)
    {
        cin >> x;
        if(x)
            b.push_back(x);
    }
    n = a.size();
    int in = 0;
    while(a[0] != b[in])
        in++;
    for(int i = 0; i < n; i++)
    {
        if(a[i] != b[in%n])
        {
            cout << "NO" << endl;
            return 0;
        }
        in++;
    }
    cout << "YES" << endl;

    return 0;
}