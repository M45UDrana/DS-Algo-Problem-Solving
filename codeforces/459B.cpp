#include <bits/stdc++.h>

using namespace std;
#define dcoutsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL),cout.tie(NULL);

int main()
{
    long long n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a+n);
    int dif = a[n-1] - a[0];
    if(dif == 0)
    {
        n--;
        cout << 0 << " " << ((n*n)+n)/2 << endl;
        return 0;
    }
    long long cnt = 0, cnt2 = 0;
    for(int i = n-1; i > 0; i--)
    {
        int tmp = a[i] - a[0];
        if(tmp == dif)
        {
            cnt++;
        }
        else
            break;
    }
    for(int i = 0; i < n; i++)
    {
        if(a[i] == a[0])
            cnt2++;
        else break;
    }
    cout << dif << " " << cnt*cnt2 << endl;

    return 0;
}