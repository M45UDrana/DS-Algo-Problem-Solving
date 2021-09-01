#include <bits/stdc++.h>

using namespace std;
#define dcoutsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n';
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL),cout.tie(NULL);

int main()
{
    int n;
    cin >> n;
    vector <pair<int,int>> v(n);
    vector <pair<int,int>> ans;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = i+1;
    }
    sort(v.begin(), v.end());

    int dif, l = 0, r, flag = 1;
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            flag = 1;
            if(v[i].first == v[j].first)
            {
                r = j; flag = 0;
            }

            if(i+1 == n || r+1 == n || flag)
            {
                if(i == r)
                {
                    ans.push_back(make_pair(v[i].first, 0));
                    break;
                }
                dif = v[i+1].second - v[i].second;
                for(int k = i; k < r; k++)
                {
                    if((v[k+1].second - v[k].second)!=dif)
                        break;
                    if(k+1 == r)
                    {
                        ans.push_back(make_pair(v[i].first, dif));
                    }
                }
                i = r; dif = 0;
                break;
            }
        }
    }
    n = ans.size();
    cout << n << endl;
    for(int i = 0; i < n; i++)
        cout << ans[i].first << " " << ans[i].second << endl;

    return 0;
}