#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k; cin >> n >> k;
    set<vector<int> > s;

    for(int i = 0; i < n; i++)
    {
        vector<int> v;
        for(int j = 0; j < k; j++)
        {
            int x; cin >> x;
            v.push_back(x);
        }
        s.insert(v);
    }
    for(auto i = s.begin(); i != s.end(); i++)
    {
        int sum = 0;
        for(int l = 0; l < k; l++)
            sum += (*i)[l];
        if(!sum)
            return !(cout << "YES" << endl);
        auto j = i;
        for(j++ ; j != s.end(); j++)
        {
            bool ok = true;;
            for(int l = 0; l < k; l++)
            {
                if((*i)[l] + (*j)[l] == 2)
                    ok = false;
            }
            if(ok)
                return !(cout << "YES" << endl);
        }
    }
    cout << "NO" << endl;
    return 0;
}