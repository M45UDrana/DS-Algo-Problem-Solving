#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0);
    int n; cin >> n;
    multiset<int>s;
    for(int i = 0, a; i < n*n; i++)
    {
        cin >> a;
        s.insert(a);
    }
    vector<int>ans;
    multiset<int>:: iterator it;
    while(ans.size() != n)
    {
        it = s.end();
        it--;
        int val = *it;
        ans.push_back(val);
        for(int i = 0; i < ans.size(); i++)
        {
            int g = __gcd(val, ans[i]);
            s.erase(s.find(g));
            if(i+1 < ans.size())
                s.erase(s.find(g));
        }
    }
    for(int i = 0; i < n; i++)
    {
        if(i != 0)
            cout << " ";
        cout << ans[i];
    }
    cout << endl;

    return 0;
}