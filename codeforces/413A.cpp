#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    int mn, mx; cin >> mn >> mx;
    vector<int> v(m);
    for(int i = 0; i < m; i++)
        cin >> v[i];
    sort(v.begin(),v.end());
    if(v[0] < mn)
        return !(cout << "Incorrect" << endl);
    else if(v[0] > mn)
        v.push_back(mn);

    if(v[m-1] > mx)
        return !(cout << "Incorrect" << endl);
    else if(v[m-1] < mx)
        v.push_back(mx);
    if(v.size() > n)
        return !(cout << "Incorrect" << endl);
    cout << "Correct" << endl;
    return 0;
}