#include <bits/stdc++.h>

using namespace std;
#define dcoutsssssssssss(a, b, c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL),cout.tie(NULL);
bool sortinrev(const pair<int,int> &a,
               const pair<int,int> &b)
{
       return (a.first > b.first);
}

int main()
{
    IO
    int n;
    cin >> n;
    int a[n];
    vector<pair<int, int>>v;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        v.push_back(make_pair(a[i], i));
    }
    sort(v.begin(), v.end(), sortinrev);

//    for(int i = 0; i < n; i++)
//        dcoutsssssssssss(v[i].first, v[i].second,"" );

    v.push_back(make_pair(-1, -1));
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i < v[j].second)
            {
                if(v[j+1].first != 0)
                    cout << v[j].first - a[i] + 1 << " ";
                else
                    cout << v[j].first - a[i] << " ";
                break;
            }
            else if(i == v[j].second && v[j].first != v[j+1].first)
            {
                cout << 0 << " ";
                break;
            }
            else if(i == v[j].second && v[j].first == v[j+1].first)
            {
                cout << 1 << " ";
                break;
            }
        }
    }

    return 0;
}