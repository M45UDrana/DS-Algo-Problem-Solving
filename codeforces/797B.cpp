#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> od_p;
    int sum = 0, od_n = -100000;
    for(int i = 0, x; i < n; i++)
    {
        cin >> x;
        if(x%2 and x > 0)
            od_p.push_back(x);
        else if(x%2)
            od_n = max(x, od_n);
        else if(x > 0)
            sum += x;
    }
    sort(od_p.begin(), od_p.end());
    for(int i = (int)od_p.size()-1; i >= 0; i--)
    {
        if((!i and !(sum%2)) or i)
            sum += od_p[i];
        else if(sum%2)
            sum += max(0, od_p[0]+od_n);
    }
    if(!(sum%2))
        sum += od_n;
    cout << sum << endl;
    return 0;
}