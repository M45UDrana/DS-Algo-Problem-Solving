#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        int n;
        cin >> n;
        n = n*4;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a+n);
        for(int i=0; i < n; i+=2)
        {
            if(a[i] == a[i+1])
            {
                a[i+1] = 0;
            }
        }

        int m = n/2;
        int ar[m], j=0;

        for(int i=0; i<n; i++)
        {
            if(a[i] != 0)
            {
                ar[j++] = a[i];
            }
        }

        if(j != m)
        {
            cout << "NO" << endl;
            continue;
        }

        int area = ar[0] * ar[m-1];

        for(int i=0, j=m-1; ; i++, j--)
        {
            if(ar[i] * ar[j] == area)
            {
                if(i+1 == j)
                {
                    cout << "YES" << endl;
                    break;
                }
            }
            else
            {
                cout << "NO"<< endl;
                break;
            }
        }
    }
    return 0;
}

/*
5
1
1 1 10 10
2
10 5 2 10 1 1 2 5
2
10 5 1 10 5 1 1 1
2
1 1 1 1 1 1 1 1
1
10000 10000 10000 10000

1
2
1 1 2 3 8 12 24 24
*/