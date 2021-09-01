#include <bits/stdc++.h>

using namespace std;
#define dcoutsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL),cout.tie(NULL);

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int a[n];
    vector<pair<int, int>>insl, fnl;
    vector<int> smt;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if(k == 1)
    {
        cout << (a[n-1] - a[0]) + 1 << endl;
        return 0;
    }
    for(int i = 0; i < n-1; i++)
    {
        insl.push_back(make_pair(a[i+1] - a[i], a[i]));
        fnl.push_back(make_pair(a[i+1] - a[i], a[i+1]));
    }
    sort(insl.begin(), insl.end());
    sort(fnl.begin(), fnl.end());

    int len = insl.size();
    smt.push_back(a[0]);
    for(int i = 1; i <= len; i++)
    {
        smt.push_back(insl[len - i].second);
        smt.push_back(fnl[len - i].second);
        if(i+1 == k) break;
    }
    smt.push_back(a[n-1]);
    sort(smt.begin(), smt.end());
    long long ans = 0;
    len = smt.size();

    for(int i = 0; i < len; i+=2)
    {
        ans += (smt[i+1] - smt[i]) + 1;
    }

    cout << ans << endl;

    return 0;
}


/*
2 1000000000 1
1 1000000000

*/