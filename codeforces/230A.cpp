#include <bits/stdc++.h>

using namespace std;
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL),cout.tie(NULL);

int main()
{
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>>v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++)
    {
        if(v[i].first < s)
        {
            s += v[i].second;
        }
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}