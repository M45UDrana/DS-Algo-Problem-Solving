#include <bits/stdc++.h>

using namespace std;

#define dcoutsssssssssss(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n';
#define IO ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
const int N = 1e5+1;

int main()
{
    int n, m;
    cin >> n;
    m = n + n;
    string str;
    cin >> str;

    sort(str.begin(), str.begin()+n);
    sort(str.begin()+n, str.begin()+m);

    bool flag = true;
    if(str[0] > str[n])
    {
        for(int i = 0; i < n; i++)
        {
            if(str[i] <= str[n+i])
            {
                flag = false;
                break;
            }
        }
    }
    else
    {
        for(int i = 0; i < n; i++)
        {
            if(str[i] >= str[n+i])
            {
                flag = false;
                break;
            }
        }
    }
    if(flag)    cout << "YES" << endl;
    else        cout << "NO" << endl;

    return 0;
}