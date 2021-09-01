#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<pair<int,int>> pos, neg;
    for(int i = 0; i < n; i++)
    {
        int x, y; cin >> x >> y;
        if(x > 0)
            pos.push_back(make_pair(x, y));
        else neg.push_back(make_pair(x, y));
    }
    sort(pos.begin(), pos.end());
    sort(neg.begin(), neg.end() , greater<pair<int,int>>());
    int ans1 = 0, ans2 = 0;  
    for(int i = 0, ng = 0, ps = 0; i < n; i++)
    {
        if(i%2)
        {
            if(ps == pos.size())
                break;
            ans1 += pos[ps].second;
            ps++;
        }
        else 
        {
            if(ng == neg.size())
                break;
            ans1 += neg[ng].second;
            ng++;
        }
    } 
    for(int i = 0, ng = 0, ps = 0; i < n; i++)
    {
        if(i%2)
        {
            if(ng == neg.size())
                break;
            ans2 += neg[ng].second;
            ng++;
        }
        else 
        {
            if(ps == pos.size())
                break;
            ans2 += pos[ps].second;
            ps++;
        }
    }
    cout << max(ans1, ans2) << endl;
    return 0;
}