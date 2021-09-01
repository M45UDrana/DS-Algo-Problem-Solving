#include <bits/stdc++.h>

using namespace std;
#define dcoutsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL),cout.tie(NULL);

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<pair<int, int>> a(n);
    long long ans = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i+1;
    }

    sort(a.begin(), a.end());
    int rng = m * k;
    vector < int > ptn;
    for(int i = 1; i ; i++)
    {
        ans += a[n - i].first;
        ptn.push_back(a[n-i].second);
        if(rng == i) break;
    }
    sort(ptn.begin(), ptn.end());
    cout << ans << endl;
    for(int i = m -1, l = 1; l < k; i+=m, l++)
    {
        cout << ptn[i] << " ";

    }

    return 0;
}