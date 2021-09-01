#include <bits/stdc++.h>

using namespace std;
#define debugsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL),cout.tie(NULL);

int main()
{
    int n;
    string str;
    cin >> n >> str;
    vector <pair <int, int>> a(n);
    vector <int> flag(n);
    int ar[1000][n], cnt = 0, ans = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second ;
        flag[i] = (int)str[i] - 48;
    }

    for(int i = 0; i < 1000; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i >= a[j].second)
            {
                if((i - a[j].second) % a[j].first == 0)
                    flag[j] = flag[j] ^ 1;
            }

            ar[i][j] = flag[j];
        }
    }

    for(int i = 0; i < 1000; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(ar[i][j] == 1)
                cnt++;
//            cout << ar[i][j] << " ";
        }
//        cout << endl;
        ans = max(ans, cnt);
        cnt = 0;
    }
    cout << ans << endl;
    return 0;
}