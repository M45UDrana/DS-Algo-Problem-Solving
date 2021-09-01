#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b+n);
    vector<pair<int,int> >ans;
    for(int i = 0; i < n; i++)
    {
        int x = b[i];
        for(int j = i; j < n; j++)
        {
            if(a[j] == x)
            {
                for(int k = j; k > i; k--)
                {
                    swap(a[k], a[k-1]);
                    ans.push_back(make_pair(k-1, k));
                }
                break;
            }
        }
    }
    for(int i = 0; i < ans.size(); i++)
        cout << ans[i].first+1 <<  " " << ans[i].second+1 << endl;

    return 0;
}