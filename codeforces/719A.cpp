#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    string s = "-1";
    for(int i = 0; i < n; i++)
    {
        if(i)
        {
            if(a[i-1]+1 == a[i])
                s = "UP";
            else if(a[i-1] == a[i]+1)
                s = "DOWN";
            else 
            {
                cout << -1 << endl;
                return 0;
            }
        }
        if(a[i] == 0)
            s = "UP";
        else if(a[i] == 15)
            s = "DOWN";
    }
    cout << s << endl;
    return 0;
}