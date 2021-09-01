#include <bits/stdc++.h>

using namespace std;
#define dcoutsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL),cout.tie(NULL);

char a[1005];
int b[125];
int main()
{
    int k;
    cin >> k >> a;
    int n = strlen(a);
    if(n%k != 0)
    {
        cout << -1 << endl;
        return 0;
    }

    for(int i = 0; i < n; i++)
    {
        b[(int)a[i]]++;
    }
    for(int i = 97; i < 125; i++)
    {
        if(b[i] % k != 0)
        {
            cout << -1 << endl;
            return 0;
        }
    }

    for(int i = 0; i < k; i++)
    {
        for(int j = 97; j < 125; j++)
        {
            int tmp = b[j] / k;
            while(tmp--)
            {
                cout << char(j);
            }
        }
    }
    return 0;
}