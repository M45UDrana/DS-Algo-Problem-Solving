#include <bits/stdc++.h>

using namespace std;
#define debugsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL),cout.tie(NULL);

int main()
{
    int n, cnt = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a+n);
    for(int i = 0; i < n; i++)
    {
        if(a[i] != 0)
        {
            cnt++;
//            cout << a[i] << endl;
            for(int j = i + 1; j < n; j++)
            {
                if(a[j] % a[i] == 0 && a[j] != 0)
                {
//                    cout << a[j] << endl;
                    a[j]=0;
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}