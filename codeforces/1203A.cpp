#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	
    int q;
    cin >> q;
    int a[201];
 
    while(q--)
    {
        int n;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if(n == 1)
        {
            cout << "YES" << endl;
            continue;
        }
        int flag=0;
        for(int i = 0; i < n-1; i++)
        {
            if(a[i]+1 == a[i+1] || a[i]-n == 0)
            {
                if(i+2 == n)
                {
                    flag = 1;
                }
            }
            else break;
        }
        for(int i = 0; i < n-1; i++)
        {
            if(a[i] == a[i+1]+1 || a[i+1]-n == 0)
            {
                if(i+2 == n)
                {
                    flag = 1;
                }
            }
            else break;
        }
 
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
 
    return 0;
}