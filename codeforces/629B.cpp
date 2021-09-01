#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main()
{
    int n; cin >> n;
    string s[n];
    vector<pair<int,int>>v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> s[i];
        cin >> v[i].first >> v[i].second;
    }
    int ans = 0;
    for(int i = 1, m=0, f=0; i <= 366; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(v[j].first <= i and v[j].second >= i)
            {
                if(s[j] == "M")
                    m++;
                else f++;
            }
        }
        ans = max(min(m,f)*2, ans);
        m = 0; f = 0;
    }
    cout << ans << endl;
    return 0;
}