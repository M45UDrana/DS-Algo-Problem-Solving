#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, sum = 0; cin >> n; 
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    int i = 0;
    while(sum)
    {
        while(sum)
        {
            if(a[i])
            {
                a[i]--;
                sum--;
                cout << 'P';
            }
            cout << 'R';
            i++;
            if(i == n-1)
                break;
        }
        while(sum)
        {
            if(a[i])
            {
                a[i]--;
                sum--;
                cout <<'P';
            }
            cout << 'L';
            i--;
            if(i == 0)
                break;
        }
    }
    cout << endl;
    return 0;
}