#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, m, k, b;
    cin >> t;

    while(t--)
    {
        cin >> n >> m >> k;
        vector <int> a(n);
        for(int i=0; i<n; i++)
            cin >> a[i];
        if(n == 1)
        {
            cout << "YES" << endl;
            continue;
        }

        for(int i = 0; i < n; i++)
        {
            if( a[i] >= a[i+1] )
            {
                b = (a[i] - max(0, (a[i+1] - k)));
                m += b;
                a[i] -= b;
            }
            else if(a[i+1] > a[i])
            {
                b = (max(0, ( a[i+1] -k )) - a[i]);
                m -= b;
                a[i] += b;

            }

            if( m < 0)
            {
                cout << "NO" << endl;
                break;
            }
            if( abs(a[i] - a[i+1]) > k)
            {
            	cout << "NO" << endl;
            	cout<<i<<" "<<abs(a[i] -a[i+1])<<" "<<m<<	endl;
                break;
            }
            
            if(i+2 == n)
            {
                cout << "YES" << endl;
                break;
            }
        }

    }
    return 0;
}

/*
5
3 0 1
4 3 5
3 1 2
1 4 7
4 10 0
10 20 10 20
2 5 5
0 11
1 9 9
99

*/