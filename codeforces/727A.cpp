#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll a, b;
vector<ll>ans;

bool dfs(ll a)
{
    if(a > b)
        return false;
    else if(a == b)
    {
        ans.push_back(a);
        return true;
    }
    else if(dfs(a*2))
    {
        ans.push_back(a);
        return true;
    }
    else if(dfs(a*10+1))
    {
        ans.push_back(a);
        return true;
    }
    else return false;
}

int main()
{
    cin >> a >> b;
    if(dfs(a))
    {
        cout << "YES" << endl << ans.size() << endl;
        for(int i = ans.size()-1; i >= 0; i--)
            cout << ans[i] << " " ;
        cout << endl;
    }
    else cout << "NO" << endl;
    
    return 0;
}