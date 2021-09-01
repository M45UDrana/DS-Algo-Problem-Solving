#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    map<int,int>mp;
    int ans = n-1;
    for(int i = 0; i < n; i++)
    {
        bool ok = true;
        mp.clear();
        for(int j = 0; j < i and ok; j++)
        {
            if(mp[a[j]] == 0)
                mp[a[j]] = 1;
            else ok = false;
        }
        if(!ok) break;
        int pos = n;
        for(int j = n-1; j >= i; j--)
        {
            if(mp[a[j]] == 0)
            {
                pos = j;
                mp[a[j]] = 1;
            }
            else
                break;
        }
        ans = min(ans, pos - i);
    }
    cout << ans << endl;
    return 0;
}