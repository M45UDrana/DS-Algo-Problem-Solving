#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, ans = 0;
        cin >> n;
        vector <pair<int, int>> ar(n);
        for(int i = 0; i < n; i++)
        {
            cin >> ar[i].first;
            ar[i].second = i+1;
        }
        if(n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        sort(ar.begin(), ar.end());
        int tempind = ar[0].second;
        ans += (tempind - 1);
        for(int i = 1; i < n; i++)
        {
            if(ar[i].second > tempind)
            {
                ans += (ar[i].second - tempind - 1);
                tempind = ar[i].second;
            }

            if(ar[i].second >= n-1 || ar[i-1].second >= n-1)
            {
                cout << ans << endl;
                break;
            }
        }

    }
    return 0;
}
/*
5
6
3 9 4 6 7 5
1
1000000
2
2 1
10
31 41 59 26 53 58 97 93 23 84
7
3 2 1 2 3 4 5

*/