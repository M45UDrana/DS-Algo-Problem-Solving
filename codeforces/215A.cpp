#include <bits/stdc++.h>

using namespace std;
#define dcoutsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL),cout.tie(NULL);

int main()
{
    int n, m;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    cin >> m;
    int b[m];
    for(int i = 0; i < m; i++)
        cin >> b[i];

    int div = 0, cnt = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(b[j] % a[i] == 0)
            {
                int tmp = b[j] / a[i];
                if(tmp > div)
                {
                    div = tmp;
                    cnt = 1;
                }
                else if(tmp == div)
                {
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;

    return 0;
}