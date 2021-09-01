#include <bits/stdc++.h>
/**
 Clear all debug;
**/
using namespace std;

int main()
{
    int n, m, ta, tb, k;
    cin >> n >> m >> ta >> tb >>k;
    vector<int> a(n);
    vector<int> b(m);
    for(int i=0; i<n; i++)
        cin>>a[i];

    for(int i=0; i<m; i++)
        cin>>b[i];

    int pos, ans;

    if(k >= min(n, m))
    {
        cout << "-1\n";
        return 0;
    }

    int j=0, i=0, x;
    for(; i<k; i++)
    {
        x = a[i] + ta;
        while(1)
        {

            //cout << pos <<" "<< x <<" "<< j << endl;
            if(b[j] >= x)
            {
                pos = b[j];
                if(j+1 == m)
                {
                    cout << "-1\n";
                    return 0;
                }
                break;
            }
            else if(j == m-1)
            {
                cout << "-1\n";
                return 0;
            }
            else
                j++;
        }
        j++;


    }

    while(1)
    {
        if(j == m)
        {
            cout << "-1\n"<< endl;
            return 0;
        }
        x = a[i] + ta;
        if(x <= b[j])
        {
            cout << b[j] + tb << endl;
            return 0;
        }
        j++;
    }
}